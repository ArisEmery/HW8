//
// Created by Aris  Emery on 4/17/17.
//

#include "PortScanAnalyzer.h"
//TODO just copy and past the set configs function from DOS
void PortScanAnalyzer::setConfigurations(Configuration configuration){
    bool goodConfiguration=false;
    bool keepTesting=true;
    int counter=0;
    KeyValue<string,string> myKeyValue;
    string currValue;
    for(int i=0; i<configuration.configurationParameters.getCount()&&counter<4;i++){
        myKeyValue=configuration.configurationParameters.getByIndex(i);
        currValue=myKeyValue.getValue();
        if(currValue==neededConfigs[0]||currValue==neededConfigs[1]){
            counter++;
        }
    }
    if(counter<2){
        cout<<"Can't make DOS object, bad parameters.\n";
        throw std::invalid_argument( "Can't make DOS object, bad parameters.\n" );
    }
    myConfiguration=configuration;
}