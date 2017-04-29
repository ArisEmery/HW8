//
// Created by Aris  Emery on 4/28/17.
//

#include "newAnalyzer.h"
void newAnalyzer::dataSummation(ifstream &inputFile) {
    string currentIP;
    string port;
    string lineGarbage;
    int counter = 0;
    int iterations = 0;
    int intPort;
    int index;
    char delim = '\n';
    vector<int> *newEntry;
    while (inputFile.is_open() && !inputFile.eof() && counter < 500) {
        getline(inputFile, lineGarbage, ',');
        getline(inputFile, currentIP, ',');
        getline(inputFile, port, ',');
        getline(inputFile, lineGarbage, delim);
        intPort = convertStringToInt(port);
        if (data.containsKey(currentIP) != true) {
            newEntry = new vector<int>;
            data.add(currentIP, *newEntry);
            int what = data.getCount();
        }
        bool found = false;
        for (int i = 0; i < data.getValueByKey(currentIP).size() && found == false; i++) {
            if (data.getValueByKey(currentIP)[i] == intPort) {
                found = true;
            }
        }
        if (!found) {
            index = data.returnIndex(currentIP);
            data.keyValuePairs[index]->m_value.push_back(intPort);
        }


        counter++;
    }

}
ResultSet newAnalyzer::attackDetection(){
    string currentIP;//TODO check if this works
    string targetIP=myConfiguration.getStringValue("IP address");
    vector<string> *newEntry1;
    newEntry1= new vector<string>;
    ResultSet POSresults;

    bool found=false;
    for (int i=0;i<data.getCount()&&found==false;i++){
        currentIP=data.getByIndex(i).m_key;
        if(currentIP==targetIP) {
            found=true;
            POSresults.results.add("IP address: "+currentIP, *newEntry1);
            POSresults.results.keyValuePairs[0]->m_value.push_back(to_string(data.getByIndex(i).m_value.size()));
        }
    }



    return POSresults;



}