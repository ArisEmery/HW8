//
// Created by Aris  Emery on 4/17/17.
//

#include "Analyzer.h"

ResultSet Analyzer::run(ifstream &inputFile){
    dataSummation(inputFile);
    return attackDetection();
}

void Analyzer::setConfigurations(Configuration configuration){
    string currKey;
    int counter=0;
    for(int i=0;i<configuration.configurationParameters.getCount();i++){
        currKey=configuration.configurationParameters.keyValuePairs[i]->m_key;
        for(int j=0;j<neededConfigs.size();j++){
            if(currKey==neededConfigs[j]){
                counter++;
            }
        }
    }
    if(counter<numConfigParams){
        cout<<"Can't make DOS object, bad parameters.\n";
        throw std::invalid_argument( "Can't make DOS object, bad parameters.\n" );
    }
    else{
        string currKey1;
        string currValue1;
        for(int i=0;i<configuration.configurationParameters.getCount();i++){
            currKey1=configuration.configurationParameters.keyValuePairs[i]->m_key;
            currValue1=configuration.configurationParameters.keyValuePairs[i]->m_value;
            myConfiguration.configurationParameters.add(currKey1, currValue1);
        }
    }
}