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
    /*
    KeyValue<string, Dictionary<string, string>> myKeyValue;
    KeyValue<string, string> myKeyValue1;
    int x=results.getCount();
    for(int i=0;i<results.getCount();i++){
        myKeyValue=results.getByIndex(i);
        out<<myKeyValue.getKey()<<":\n";
        string tester4=myKeyValue.getKey();
        string asf=myKeyValue.getValue().getByIndex(1).getValue();
        int tester=myKeyValue.getValue().getCount();
        for(int j=0; j<myKeyValue.getValue().getCount();j++){
            myKeyValue1=myKeyValue.getValue().getByIndex(j);
            out<<myKeyValue1.getValue()<<endl;
        }
        out<<endl<<endl;
    }
     */

}