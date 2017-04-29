//
// Created by Aris  Emery on 4/17/17.
//

#include "DenialOfServiceAnalyzer.h"
ResultSet DenialOfServiceAnalyzer::run(ifstream &inputFile) {
    ///data summation phase
    Dictionary<string, Dictionary<int, int>> data;
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
            //counter++;
            //int whatayaknow = data.currentKeyValuePairs;
            data.keyValuePairs[data.currentKeyValuePairs - 1]->m_value.add(currentTimeStamp, 1);//TODO this may need to be index-1
            //int tester4=data.getByIndex(data.getCount()-1).m_value.getByIndex(0).m_key;//TODO ask why is that when this is uncommented it crashes?
        }
        else if (data.keyValuePairs[index]->m_value.containsKey(currentTimeStamp) == true) {
            //data.keyValuePairs[index]->m_value.keyValuePairs[0]->m_value;
            int index2=data.getByIndex(index).getValue().returnIndex(currentTimeStamp);
            //int index2 = data.keyValuePairs[index]->m_value.returnIndex(currentTimeStamp);
            //data.keyValuePairs[index]->m_value.keyValuePairs[0]->m_value;
            data.keyValuePairs[index]->m_value.keyValuePairs[index2]->incrementValue();///WHY is this crashing?
            //data.keyValuePairs[index]->m_value.keyValuePairs[index2]->incrementValue();
        }
        else if (data.getByIndex(index).getValue().containsKey(currentTimeStamp) != true) {
            //data.getByIndex(index).getValue().containsKey(currentTimeStamp)
            //int what = data.keyValuePairs[index]->m_value.getCount();
            data.keyValuePairs[index]->m_value.add(currentTimeStamp, 1);
            //int tester4=data.keyValuePairs[index]->m_value.getByIndex(1).m_key;
           // what = data.keyValuePairs[index]->m_value.getCount();
//string asfsd;
        }
iterations++;

        //TODO implement the new add method needed.
    }
    ///ATTACK DETECTION PHASE
    int likelyThreshold = myConfiguration.getIntValue("Likely Attack Message Count");//TODO implement the new add method needed.
    int possibleThreshold = myConfiguration.getIntValue("Possible Attack Message Count");
    int timeFrame = myConfiguration.getIntValue("Timeframe");
    string timeFrameStr=myConfiguration.configurationParameters.getByKey("Timeframe").m_key;
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
    //int tester=data.getByIndex(wada).m_value.getByIndex(0).m_key;
    //kwada=data.keyValuePairs[1]->m_value.keyValuePairs[0]->m_key;//TODO ask why did this cause crash?
    int totalNumber=0;
    //tester=data.getByIndex(wada).m_value.getByIndex(1).m_key;
    //tester=data.getByIndex(wada).m_value.getByIndex(2).m_key;
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
    ////

    ResultSet bsSet;
    return bsSet;




/*


    int likelyThreshold=myConfiguration.getIntValue("Likely Attack Message Count");//TODO implement the new add method needed.
    int possibleThreshold=myConfiguration.getIntValue("Possible Attack Message Count");
    int timeFrame=myConfiguration.getIntValue("Timeframe");
    ResultSet results;

*/

}
