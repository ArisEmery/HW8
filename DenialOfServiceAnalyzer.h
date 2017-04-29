//
// Created by Aris  Emery on 4/17/17.
//

#ifndef ITAK_DENIALOFSERVICEANALYZER_H
#define ITAK_DENIALOFSERVICEANALYZER_H

#include "Analyzer.h"
#include <fstream>
#include "utils.h"
using namespace std;
class DenialOfServiceAnalyzer : public Analyzer { //: public Analyzer
private:
public:
    DenialOfServiceAnalyzer(){
        neededConfigs.push_back("Timeframe");
        neededConfigs.push_back("Likely Attack Message Count");
        neededConfigs.push_back("Possible Attack Message Count");
        numConfigParams=neededConfigs.size();
    };
    //ResultSet run(std::ifstream &inputFile);
    Dictionary<string, Dictionary<int, int>> data;
    void dataSummation(ifstream &inputFile);
    ResultSet attackDetection();
};
       /*
        * class PortScanAnalyzer : public Analyzer {
private:
public:
    PortScanAnalyzer(){
        neededConfigs.push_back("Likely Attack Port Count");
        neededConfigs.push_back("Possible Attack Port Count");
        numConfigParams=neededConfigs.size();
    };
    ResultSet run(ifstream &inputFile);
};
        */

#endif //ITAK_DENIALOFSERVICEANALYZER_H
