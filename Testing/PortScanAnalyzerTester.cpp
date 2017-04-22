//
// Created by Aris  Emery on 4/21/17.
//

#include "PortScanAnalyzerTester.h"

void PortScanAnalyzerTester::testSetConfigurations() {
    PortScanAnalyzer myPCA;
    Configuration myConfiguration;
    bool caught=false;
    myConfiguration.configurationParameters.add("test1key", "Timeframe");
    myConfiguration.configurationParameters.add("test2key", "Likely Attack Port Count");
    myConfiguration.configurationParameters.add("test3key", "Likely Attack Message Count");
    myConfiguration.configurationParameters.add("test4key", "Possible Attack Port Count");
    myConfiguration.configurationParameters.add("test5key", "test5Value");
    try{
        myPCA.setConfigurations(myConfiguration);
    }
    catch( const invalid_argument& e ) {
        caught=true;
    }
    if(caught==true){
        cout<<"Failure in testSetConfigurations, good values rejected as bad.\n";
    }

    PortScanAnalyzer myPCA1;
    Configuration myConfiguration1;
    caught=false;
    myConfiguration1.configurationParameters.add("test1key", "Timeframe");
    myConfiguration1.configurationParameters.add("test2key", "test2Value");
    myConfiguration1.configurationParameters.add("test3key", "Lasdfsadf");
    myConfiguration1.configurationParameters.add("test4key", "asfgadsf");
    myConfiguration1.configurationParameters.add("test5key", "test5Value");

    try{
        myPCA1.setConfigurations(myConfiguration1);
    }
    catch( const invalid_argument& e ) {
        caught=true;
    }
    if(caught==false){
        cout<<"Failure in testSetConfigurations, bad values accepted as good.\n";
    }else{cout<<"^^Second one when working should make error message about bad parameters (if this message is showing then all is well).\n";}

}


