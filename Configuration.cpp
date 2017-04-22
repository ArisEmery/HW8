//
// Created by Aris  Emery on 4/17/17.
//

#include "Configuration.h"
#include "utils.h"
string Configuration::getStringValue(string name){
    KeyValue<string, string> myKeyValue;
    myKeyValue=configurationParameters.getByKey(name);
    return myKeyValue.getValue();
}
int Configuration::getIntValue(string name){
    KeyValue<string, string> myKeyValue;
    myKeyValue=configurationParameters.getByKey(name);
    string returnString=myKeyValue.getValue();
    int returnValue=convertStringToInt(returnString);
    return convertStringToInt(returnString);
}
double Configuration::getDoubleValue(string name){
    KeyValue<string, string> myKeyValue;
    myKeyValue=configurationParameters.getByKey(name);
    string returnString=myKeyValue.getValue();
    return convertStringToDouble(returnString);
}