
#include "UserInterface.h"
int main() {
    string likelyOption="8";
    string possibleOption="12";


/*
    ifstream myfile("/Users/arisemery/CLionProjects/ITAK/SampleData.csv");
    PortScanAnalyzer myPCA;
    Configuration myConfiguration;
    myConfiguration.configurationParameters.add("Likely Attack Port Count", likelyOption);
    myConfiguration.configurationParameters.add("Possible Attack Port Count", possibleOption);
    myPCA.setConfigurations(myConfiguration);
    ResultSet myResultSet=myPCA.run(myfile);
    myfile.close();
    myResultSet.print(cout);
    return 0;
}
 */

   UserInterface myUserInterface;
    myUserInterface.run();
    return 0;
}