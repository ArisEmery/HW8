#include <iostream>
#include "Dictionary.h"
#include "KeyValue.h"
#include "Configuration.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    Dictionary<string, string> myDictionary(5);
    myDictionary.add("bitch", "money");
    KeyValue<string, string> myKeyValue;
    myKeyValue=myDictionary.getByKey("bitch");
    string tester=myKeyValue.getKey();
    cout<<myKeyValue.getValue()<<endl;
    cout<<myKeyValue.getKey()<<endl;
    Configuration myConfiguration;
    myConfiguration.configurationParameters.add("test1key", "test1Value");
    string line;
    ifstream myfile("/Users/arisemery/CLionProjects/ITAK/SampleData.csv");
    while (myfile.is_open() && !myfile.eof())
    {
        getline(myfile, line);

    }

    return 0;
}