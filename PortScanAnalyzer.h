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
    PortScanAnalyzer(){};
    string neededConfigs[2]={"Likely Attack Port Count","Possible Attack Port Count"};
    ResultSet run(ifstream &inputFile);
    void setConfigurations(Configuration configuration);

};


#endif //ITAK_PORTSCANANALYER_H
