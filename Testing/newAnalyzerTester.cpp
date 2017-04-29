//
// Created by Aris  Emery on 4/28/17.
//

#include "newAnalyzerTester.h"
#include "../Analyzer.h"
void newAnalyzerTester::checkResults(){
    ifstream myfile("/Users/arisemery/CLionProjects/ITAK/SampleData.csv");
    newAnalyzer myNAT;
    Configuration myConfiguration;
    cout<<"Searching for number of ports connected to on\n";
    myConfiguration.configurationParameters.add("IP address", "184.64.34.23");
    myNAT.setConfigurations(myConfiguration);
    //string isit=myPCA.myConfiguration.configurationParameters.getByIndex(1).m_key;
    ResultSet myResultSet=myNAT.run(myfile);
    myfile.close();
    myResultSet.print(cout);
}