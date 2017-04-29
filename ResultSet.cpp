//
// Created by Aris  Emery on 4/17/17.
//

#include "ResultSet.h"
void ResultSet::print(ostream& out){
    KeyValue<string, vector<string>> myKeyValue;
    for(int i=0;i<results.getCount();i++){
        out<<results.getByIndex(i).getKey()<<":\n";
        for(int j=0; j<results.getByIndex(i).getValue().size();j++){
            out<<"   "<<results.getByIndex(i).getValue()[j]<<endl;
        }
    }
}