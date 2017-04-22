//
// Created by Aris  Emery on 4/19/17.
//

#include "ConfigurationTester.h"
#include "../utils.h"
void ConfigurationTester::testConfParameters(){
    //Test to see if it returns proper parameters given
    Configuration myConfiguration;
    myConfiguration.configurationParameters.add("test1key", "test1Value");
    myConfiguration.configurationParameters.add("test2key", "test2Value");
    myConfiguration.configurationParameters.add("test3key", "test3Value");
    myConfiguration.configurationParameters.add("test4key", "test4Value");
    myConfiguration.configurationParameters.add("test5key", "test5Value");
    KeyValue<string, string> myKeyValue1;
    if(myConfiguration.configurationParameters.getByKey("test1key").getValue()!="test1Value"){
        cout<<"Failure in testConfParameters.\n";
    }
    if(myConfiguration.configurationParameters.getByKey("test2key").getValue()!="test2Value"){
        cout<<"Failure in testConfParameters.\n";
    }
    if(myConfiguration.configurationParameters.getByKey("test3key").getValue()!="test3Value"){
        cout<<"Failure in testConfParameters.\n";
    }
    if(myConfiguration.configurationParameters.getByKey("test4key").getValue()!="test4Value"){
        cout<<"Failure in testConfParameters.\n";
    }
    if(myConfiguration.configurationParameters.getByKey("test5key").getValue()!="test5Value"){
        cout<<"Failure in testConfParameters.\n";
    }
}

void ConfigurationTester::testReturnAsInt(){
    Configuration myConfiguration;
    myConfiguration.configurationParameters.add("test1key", "13");
    int test=myConfiguration.getIntValue("test1key");
    if(test!=13){
        cout<<"Failed to properly covert string to int"<<endl;
    }
    myConfiguration.configurationParameters.add("test2key", "1397");
    int test1=myConfiguration.getIntValue("test2key");
    if(test1!=1397){
        cout<<"Failed to properly covert string to int"<<endl;
    }
    myConfiguration.configurationParameters.add("test3key", "345");
    int test2=myConfiguration.getIntValue("test3key");
    if(test2!=345){
        cout<<"Failed to properly covert string to int"<<endl;
    }
}

void ConfigurationTester::testReturnAsDouble(){
    Configuration myConfiguration;
    myConfiguration.configurationParameters.add("test1key", "1.3");
    double test=myConfiguration.getDoubleValue("test1key");
    if(test!=1.3){
        cout<<"Failed to properly covert string to double"<<endl;
    }
    myConfiguration.configurationParameters.add("test2key", "139.7");
    double test1=myConfiguration.getDoubleValue("test2key");
    if(test1!=139.7){
        cout<<"Failed to properly covert string to double"<<endl;
    }
    myConfiguration.configurationParameters.add("test3key", "3.45");
    double test2=myConfiguration.getDoubleValue("test3key");
    if(test2!=3.45){
        cout<<"Failed to properly covert string to double"<<endl;
    }
}