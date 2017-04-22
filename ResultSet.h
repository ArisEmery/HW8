//
// Created by Aris  Emery on 4/17/17.
//

#ifndef ITAK_RESULTSET_H
#define ITAK_RESULTSET_H


#include "Dictionary.h"
#include <vector>
using namespace std;
class ResultSet {
public:

    Dictionary<string, vector<string>> results;\
    void print(ostream& out);
};


#endif //ITAK_RESULTSET_H
