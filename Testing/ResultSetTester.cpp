//
// Created by Aris  Emery on 4/21/17.
//

#include "ResultSetTester.h"
void ResultSetTester::testPrint(){
    ResultSet myResultSet;
    vector<string> result1;
    result1.push_back("asfd");
    result1.push_back("453");
    result1.push_back("5342");
    result1.push_back("ge");

    vector<string> result2;
    result2.push_back("vsdgf");
    result2.push_back("muyjfnhdbfg");
    result2.push_back("svdf");
    result2.push_back("ryt");

    vector<string> result3;
    result3.push_back("6544");
    result3.push_back("453");
    result3.push_back("9876543");
    result3.push_back("234567");
    Dictionary<string, vector<string>> myDictionary;
    myResultSet.results.add("result1", result1);
    myResultSet.results.add("result2", result2);
    myResultSet.results.add("result3", result3);

    myResultSet.print(cout);

    cout<<"If it looks like a believable ResultSet up above, it passed, and if not, it failed\n";

}