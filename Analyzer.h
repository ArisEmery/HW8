//
// Created by Aris  Emery on 4/17/17.
//

#ifndef ITAK_ANALYZER_H
#define ITAK_ANALYZER_H

#include <iostream>
#include "Configuration.h"
using namespace std;
class Analyzer {
private:
public:
    Configuration myConfiguration;
    //TODO ask question on why the pure virtual won't work even I override(with=0), also, find what functions have to be virtual for abstract.
    //Analyzer(){};
    virtual void run(ifstream &inputFile){};
    virtual void setConfigurations(){};
};


#endif //ITAK_ANALYZER_H
