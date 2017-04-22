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
    PortScanAnalyzerTester myPSTester;
    myPSTester.testSetConfigurations();
    ResultSetTester myResultSetTester;
    myResultSetTester.testPrint();
    DenialOfServiceAnalyzerTester myDOSTester;
    myDOSTester.testSetConfigurations();
    myDOSTester.testRun();
    myDOSTester.testDictionaryContains();
    return 0;
}
