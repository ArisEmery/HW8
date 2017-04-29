//
// Created by Aris  Emery on 4/17/17.
//

#include "DenialOfServiceAnalyzer.h"
void DenialOfServiceAnalyzer::dataSummation(ifstream &inputFile){
    Dictionary<int, int> timestampIncrementor;
    string currentIP;
    int currentTimeStamp;
    string line;
    string stringIP;
    string lineFinisher;
    int counter = 0;
    int iterations = 0;
    char delim = '\n';
    Dictionary<int, int> *newEntry;
    while (inputFile.is_open() && !inputFile.eof()) {
        getline(inputFile, stringIP, ',');
        currentTimeStamp = convertStringToInt(stringIP);
        getline(inputFile, currentIP, ',');
        getline(inputFile, lineFinisher, delim);
        int index = data.returnIndex(currentIP);
        //string letsee = data.keyValuePairs[index]->m_key;
        if (data.containsKey(currentIP) != true) {
            newEntry = new Dictionary<int, int>;
            data.add(currentIP, *newEntry);
            data.keyValuePairs[data.currentKeyValuePairs - 1]->m_value.add(currentTimeStamp, 1);
        }
        else if (data.keyValuePairs[index]->m_value.containsKey(currentTimeStamp) == true) {
            int index2=data.getByIndex(index).getValue().returnIndex(currentTimeStamp);
            data.keyValuePairs[index]->m_value.keyValuePairs[index2]->incrementValue();///WHY is this crashing?
        }
        else if (data.getByIndex(index).getValue().containsKey(currentTimeStamp) != true) {
            data.keyValuePairs[index]->m_value.add(currentTimeStamp, 1);
        }
        iterations++;
    }
}
ResultSet DenialOfServiceAnalyzer::attackDetection(){
    int likelyThreshold = myConfiguration.getIntValue("Likely Attack Message Count");
    int possibleThreshold = myConfiguration.getIntValue("Possible Attack Message Count");
    int timeFrame = myConfiguration.getIntValue("Timeframe");
    string timeFrameStr=myConfiguration.configurationParameters.getByKey("Timeframe").m_key;
    string currentIP;
    ResultSet myDOSresults;
    vector<string> * newVecEntry;
    newVecEntry=new vector<string>;
    myDOSresults.results.add("Likely Attackers",*newVecEntry);
    newVecEntry=new vector<string>;
    myDOSresults.results.add("Possible Attackers",*newVecEntry);
    newVecEntry=new vector<string>;
    myDOSresults.results.add("Attack Periods",*newVecEntry);
    newVecEntry=new vector<string>;
    myDOSresults.results.add("Timeframe",*newVecEntry);
    myDOSresults.results.keyValuePairs[3]->m_value.push_back(timeFrameStr);
    int totalNumber=0;
    for(int i=0;i<data.getCount();i++){
        currentIP=data.getByIndex(i).m_key;
        for(int j=0;j<data.getByIndex(i).m_value.getCount()&&j<timeFrame;j++){
            totalNumber+=j<data.getByIndex(i).m_value.getByIndex(j).getValue();
        }
        if(totalNumber>=likelyThreshold){
            myDOSresults.results.keyValuePairs[0]->m_value.push_back(currentIP);
            myDOSresults.results.keyValuePairs[2]->m_value.push_back(timeFrameStr);
        }
        else if(totalNumber>=possibleThreshold){
            myDOSresults.results.keyValuePairs[1]->m_value.push_back(currentIP);
            myDOSresults.results.keyValuePairs[2]->m_value.push_back(timeFrameStr);
        }
    }
    ResultSet bsSet;
    return bsSet;
}

