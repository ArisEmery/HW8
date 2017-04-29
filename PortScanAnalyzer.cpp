//
// Created by Aris  Emery on 4/17/17.
//

#include "PortScanAnalyzer.h"
//TODO just copy and past the set configs function from DOS


ResultSet PortScanAnalyzer::run(ifstream &inputFile){
    Dictionary<string, vector<int>> data;
    string currentIP;
    string port;
    string lineGarbage;
    int counter=0;
    int iterations=0;
    int intPort;
    int index;
    char delim='\n';
    vector<int> *newEntry;
    while (inputFile.is_open() && !inputFile.eof()&&counter<500)
    {
        ///Data summation phase
        getline(inputFile, lineGarbage, ',');
        getline(inputFile, currentIP, ',');
        getline(inputFile, port, ',');
        getline(inputFile, lineGarbage, delim);
        intPort=convertStringToInt(port);
        if(data.containsKey(currentIP)!=true){
            newEntry= new vector<int>;
            data.add(currentIP,*newEntry);
            int what=data.getCount();
        }
        bool found=false;
        for (int i=0;i<data.getValueByKey(currentIP).size()&&found==false;i++){
            if(data.getValueByKey(currentIP)[i]==intPort){
                found=true;
            }
        }
        if(!found){
            index=data.returnIndex(currentIP);
            data.keyValuePairs[index]->m_value.push_back(intPort);
            //data.getValueByKey(currentIP).push_back(intPort);
        }




        counter++;
    }
    ///Attack detection phase
    int likelyThreshold=myConfiguration.getIntValue("Likely Attack Port Count");//TODO implement the new add method needed.
    int possibleThreshold=myConfiguration.getIntValue("Possible Attack Port Count");
    vector<string> *newEntry1;
    newEntry1= new vector<string>;
    ResultSet POSresults;
    POSresults.results.add("Likely attackers", *newEntry1);
    newEntry1= new vector<string>;
    POSresults.results.add("Possible attackers", *newEntry1);
    for (int i=0;i<data.getCount();i++){
        //*newEntry=data.getByIndex(i).m_value;
        currentIP=data.getByIndex(i).m_key;
        string tester=POSresults.results.keyValuePairs[0]->m_key;
        tester=POSresults.results.keyValuePairs[1]->m_key;
        int saf=data.getByIndex(i).m_value.size();
        if(data.getByIndex(i).m_value.size()>=likelyThreshold){
            POSresults.results.keyValuePairs[0]->m_value.push_back(currentIP);
        }
        else if(data.getByIndex(i).m_value.size()>=possibleThreshold){
            POSresults.results.keyValuePairs[1]->m_value.push_back(currentIP);
        }
    }
    /*
    cout<<"184.64.34.23"<<endl;
    cout<<data.getByKey("184.64.34.23").m_value.size()<<endl;
    cout<<"182.3.53.230"<<endl;
    cout<<data.getByKey("182.3.53.230").m_value.size()<<endl;
    cout<<"119.43.23.54"<<endl;
    cout<<data.getByKey("119.43.23.54").m_value.size()<<endl;
    */
    return POSresults;
}