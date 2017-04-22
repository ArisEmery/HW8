//
// Created by Aris  Emery on 4/17/17.
//
#include "ConfigurationTester.h"
#include "DenialOfServiceAnalyzerTester.h"
#include "PortScanAnalyzerTester.h"
int main(){
    ConfigurationTester myConfigurationTester;
    myConfigurationTester.testConfParameters();
    myConfigurationTester.testReturnAsInt();
    myConfigurationTester.testReturnAsDouble();
    DenialOfServiceAnalyzerTester myDOSTester;
    myDOSTester.testSetConfigurations();
    PortScanAnalyzerTester myPSTester;
    myPSTester.testSetConfigurations();
    return 0;
}
