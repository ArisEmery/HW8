//
// Created by Aris  Emery on 4/17/17.
//
#include "ConfigurationTester.h"
#include "DenialOfServiceAnalyzerTester.h"
#include "PortScanAnalyzerTester.h"
#include "ResultSetTester.h"
int main(){
    ConfigurationTester myConfigurationTester;
    myConfigurationTester.testConfParameters();
    myConfigurationTester.testReturnAsInt();
    myConfigurationTester.testReturnAsDouble();
    ResultSetTester myResultSetTester;
    myResultSetTester.testPrint();
    DenialOfServiceAnalyzerTester myDOSTester;
    myDOSTester.testSetConfigurations();
    //myDOSTester.testRun();
    myDOSTester.testDictionaryContains();
    PortScanAnalyzerTester myPSTester;
    myPSTester.testSetConfigurations();
    myPSTester.testRun();
    return 0;
}
