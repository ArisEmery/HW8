//
// Created by Aris  Emery on 4/17/17.
//

#include "DenialOfServiceAnalyzer.h"
void DenialOfServiceAnalyzer::setConfigurations(Configuration configuration){
    bool goodConfiguration=false;
    bool keepTesting=true;
    int counter=0;
    KeyValue<string,string> myKeyValue;
    string currValue;
    for(int i=0; i<configuration.configurationParameters.getCount()&&counter<4;i++){
        myKeyValue=configuration.configurationParameters.getByIndex(i);
        currValue=myKeyValue.getValue();
        if(currValue==neededConfigs[0]||currValue==neededConfigs[1]||currValue==neededConfigs[2]){
            counter++;
        }
    }
    if(counter<3){
        cout<<"Can't make DOS object, bad parameters.\n";
        throw std::invalid_argument( "Can't make DOS object, bad parameters.\n" );
    }
    myConfiguration=configuration;
}

void DenialOfServiceAnalyzer::run(ifstream &inputFile){
    /*
    Data loading/filing phase: Read each record (line) from the input stream and
     account for it in an address-to-summary dictionary, where
    • the key is string and represents source IP address
    • the value is a timestamp-to-count dictionary, where
    o the key is the millisecond timestamp of the message o the value is counter
    */
    Dictionary<string, Dictionary<int, int>> data;
    //Dictionary<double,int> newEntry;
    //newEntry.add(0,0);
    Dictionary<int, int> timestampIncrementor;
    string currentIP;
    int currentTimeStamp;
    string line;
    string stringIP;
    string lineFinisher;
    int counter=0;
    int iterations=0;
    char delim='\n';
    Dictionary<int,int> newEntry;
    while (inputFile.is_open() && !inputFile.eof())
    {
        getline(inputFile, stringIP, ',');
        currentTimeStamp=convertStringToInt(stringIP);
        getline(inputFile, currentIP, ',');
        getline(inputFile, lineFinisher, delim);
        //newEntry=new Dictionary<int,int>;
        //newEntry->add(currentTimeStamp,1);
       // bool fasdfsd=newEntry.containsKey(currentTimeStamp);
        if(data.containsKey(currentIP)!=true){
            //newEntry.add(currentTimeStamp,0);
            data.add(currentIP,newEntry);
            counter++;
            data.keyValuePairs[data.currentKeyValuePairs-1]->m_value.add(currentTimeStamp,0);//TODO this may need to be index-1
        }
        int index=data.returnIndex(currentIP);
        string letsee=data.keyValuePairs[index]->m_key;
        if(data.keyValuePairs[index]->m_value.containsKey(currentTimeStamp)==true){
            int index2=data.keyValuePairs[index]->m_value.returnIndex(currentTimeStamp);
            int see=data.keyValuePairs[index]->m_value.keyValuePairs[index2]->m_value;
            data.keyValuePairs[index]->m_value.keyValuePairs[index2]->m_value++;
            see=data.keyValuePairs[index]->m_value.keyValuePairs[index2]->m_value;
            data.keyValuePairs[index]->m_value.keyValuePairs[index2]->incrementValue();
        }
        if(data.keyValuePairs[index]->m_value.containsKey(currentTimeStamp)!=true){
            data.keyValuePairs[index]->m_value.add(currentTimeStamp,0);
            //int arwesf=data.getValueByKey(currentIP).keyValuePairs[0]->m_value;
        }

        iterations++;
        //TODO implement the new add method needed.
    }
    if(data.containsKey("184.64.34.23")==true){
        cout<<"yeet"<<endl;
    }
    //cout<<data.keyValuePairs[]
    /*
    Dictionary<int,int> cool=data.getValueByKey("184.64.34.23");
    int what=data.getValueByKey("184.64.34.23").getValueByKey(1296004);//but how to you add when there's nothing to get.
    Dictionary<int,int> fuck=data.getValueByKey("184.64.34.23");
//    KeyValue<int,int> wowzers=fuck.getValueByKey(1296004);
    if(data.getValueByKey("184.64.34.23").containsKey(1296004)==true){
        cout<<"yexdgfhet"<<endl;
    }
    cout<<data.getValueByKey("184.64.34.23").getByKey(1296004).m_value<<endl;
    cout<<counter<<endl;
     */
}