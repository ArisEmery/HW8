//
// Created by Aris  Emery on 4/17/17.
//

#ifndef ITAK_PORTSCANANALYER_H
#define ITAK_PORTSCANANALYER_H

#include "Analyzer.h"
using namespace std;
class PortScanAnalyzer : public Analyzer {
private:
public:
    PortScanAnalyzer(){};
    string neededConfigs[2]={"Likely Attack Port Count","Possible Attack Port Count"};
    void run(ostream input);
    void setConfigurations(Configuration configuration);

};


#endif //ITAK_PORTSCANANALYER_H
