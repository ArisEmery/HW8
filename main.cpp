#include <iostream>
#include "Dictionary.h"
#include "KeyValue.h"
#include "Configuration.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include "ResultSet.h"
#include "PortScanAnalyzer.h"
using namespace std;
int main() {
    cout<<"This main is going to let you use the PortScanAnalyzer\n";
    cout<<"Pick two numbers, one for the count of ports in a likely attack, and "
            "one for a possible attack";
    string likelyOption="12";
    string possibleOption="8";
    //cin>>likelyOption;
    //cin>>possibleOption;


    ifstream myfile("/Users/arisemery/CLionProjects/ITAK/SampleData.csv");
    PortScanAnalyzer myPCA;
    Configuration myConfiguration;
    cout<<"Running portscan test for first 500 lines of sample Data:\n";
    myConfiguration.configurationParameters.add("Likely Attack Port Count", likelyOption);
    myConfiguration.configurationParameters.add("Possible Attack Port Count", possibleOption);
    myPCA.setConfigurations(myConfiguration);
    //string isit=myPCA.myConfiguration.configurationParameters.getByIndex(1).m_key;
    ResultSet myResultSet=myPCA.run(myfile);
    myfile.close();
    myResultSet.print(cout);
    cout<<"\n\nNote: the number of lines read from sample data can be changed with the third condition\n"
            "of the while loop in PortScanAnalyzer::run(ifstream &inputFile), but without being optimized\n"
            "it takes some time to process the whole file\n";
    return 0;
}