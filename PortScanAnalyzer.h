//
// Created by Aris  Emery on 4/17/17.
//

#ifndef ITAK_PORTSCANANALYER_H
#define ITAK_PORTSCANANALYER_H

#include "Analyzer.h"
#include <fstream>
#include "utils.h"
#include "vector"
using namespace std;
class PortScanAnalyzer : public Analyzer {
private:
public:
    PortScanAnalyzer(){
        neededConfigs.push_back("Likely Attack Port Count");
        neededConfigs.push_back("Possible Attack Port Count");
        numConfigParams=neededConfigs.size();
    };
    ResultSet run(ifstream &inputFile);
};


#endif //ITAK_PORTSCANANALYER_H
