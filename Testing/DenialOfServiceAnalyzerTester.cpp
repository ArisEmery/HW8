//
// Created by Aris  Emery on 4/20/17.
//

#include "DenialOfServiceAnalyzerTester.h"
//#include "../Analyzer.h"


void DenialOfServiceAnalyzerTester::testSetConfigurations() {
    DenialOfServiceAnalyzer myDos;
    Configuration myConfiguration;
    bool caught=false;
    myConfiguration.configurationParameters.add("test1key", "Timeframe");
    myConfiguration.configurationParameters.add("test2key", "test2Value");
    myConfiguration.configurationParameters.add("test3key", "Likely Attack Message Count");
    myConfiguration.configurationParameters.add("test4key", "Possible Attack Message Count");
    myConfiguration.configurationParameters.add("test5key", "test5Value");
    try{
        myDos.setConfigurations(myConfiguration);
    }
    catch( const invalid_argument& e ) {
        caught=true;
    }
    if(caught==true){
        cout<<"Failure in testSetConfigurations, good values rejected as bad.\n";
    }

    DenialOfServiceAnalyzer myDos1;
    Configuration myConfiguration1;
    caught=false;
    myConfiguration1.configurationParameters.add("test1key", "Timeframe");
    myConfiguration1.configurationParameters.add("test2key", "test2Value");
    myConfiguration1.configurationParameters.add("test3key", "Lasdfsadf");
    myConfiguration1.configurationParameters.add("test4key", "asfgadsf");
    myConfiguration1.configurationParameters.add("test5key", "test5Value");

    try{
        myDos1.setConfigurations(myConfiguration1);
    }
    catch( const invalid_argument& e ) {
        caught=true;
    }
    if(caught==false){
        cout<<"Failure in testSetConfigurations, bad values accepted as good.\n";
    }else{cout<<"^^Second one when working should make error message about bad parameters (if this message is showing then all is well).\n";}

}



void DenialOfServiceAnalyzerTester::testRun(){
    ifstream myfile("/Users/arisemery/CLionProjects/ITAK/SampleData.csv");
    DenialOfServiceAnalyzer myDos;
    Configuration myConfiguration;
    myConfiguration.configurationParameters.add("Likely Attack Message Count", "5");
    myConfiguration.configurationParameters.add("Possible Attack Message Count", "5");
    myConfiguration.configurationParameters.add("Timeframe", "5");
    myDos.setConfigurations(myConfiguration);
    myDos.run(myfile);
    myfile.close();
    cout<<"Running denial of service test for first 500 lines of sample Data:\n";
    cout<<"Number for likely attack: 5\n";
    cout<<"Number for possible attack: 5\n";
    cout<<"Timeframe: 5\n";

    /*


    myDos.setConfigurations(myConfiguration);
    string isit=myDos.myConfiguration.configurationParameters.getByIndex(1).m_key;
    myResultSet.print(cout);
     */
}

void DenialOfServiceAnalyzerTester::testDictionaryContains(){
    Dictionary<string, int> myDictionary;
    myDictionary.add("asdf",433);
    myDictionary.add("454",7);
    myDictionary.add("gert",6);
    myDictionary.add("45twfe4",1);
    if(myDictionary.containsKey("asdf")!=true){
        cout<<"Failure in containsKey method of Dictionary.\n";
    }
    if(myDictionary.containsKey("kvjgjghlkjcghjgglkj")==true){
        cout<<"Failure in containsKey method of Dictionary.\n";
    }

}