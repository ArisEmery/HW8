//
// Created by Aris  Emery on 4/28/17.
//

#ifndef ITAK_USERINTERFACE_H
#define ITAK_USERINTERFACE_H

#include "UserInterface.h"
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
#include "newAnalyzer.h"
using namespace std;

class UserInterface {
public:
    Configuration myPCAConfiguration;
    Configuration myNAConfiguration;
    UserInterface(){};
    void run();
    void makeResults(int n, string inputFile);
};


#endif //ITAK_USERINTERFACE_H
