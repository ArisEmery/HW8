//
// Created by Aris  Emery on 4/28/17.
//

#ifndef ITAK_NEWANALYZER_H
#define ITAK_NEWANALYZER_H
#include "Analyzer.h"
#include <fstream>
#include "utils.h"
#include "vector"

class newAnalyzer : public Analyzer {
private:
public:
    Dictionary<string, vector<int>> data;
    newAnalyzer(){
        neededConfigs.push_back("IP address");
        numConfigParams=neededConfigs.size();
    };
    //ResultSet run(ifstream &inputFile);
    void dataSummation(ifstream &inputFile);
    ResultSet attackDetection();

};


#endif //ITAK_NEWANALYZER_H
