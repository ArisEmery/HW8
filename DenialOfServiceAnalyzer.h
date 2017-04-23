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
    DenialOfServiceAnalyzer(){};
    string neededConfigs[3]={"Timeframe","Likely Attack Message Count","Possible Attack Message Count"};
    ResultSet run(std::ifstream &inputFile);
    void setConfigurations(Configuration configuration);
};
        //A DenialOfServiceAnalyzer object should only accept Configuration
        //objects that include, as a minimum, parameters with the following name:
        //“Timeframe”, “Likely Attack Message Count”, “Possible Attack Message Count”

#endif //ITAK_DENIALOFSERVICEANALYZER_H
