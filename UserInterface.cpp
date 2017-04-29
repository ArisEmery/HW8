//
// Created by Aris  Emery on 4/28/17.
//
#include "UserInterface.h"
void UserInterface::run(){
    myPCAConfiguration.configurationParameters.add("Likely Attack Port Count", "12");
    myPCAConfiguration.configurationParameters.add("Possible Attack Port Count", "8");
    myNAConfiguration.configurationParameters.add("IP address", "184.64.34.23");
    //string inputFileDefault="/Users/arisemery/CLionProjects/ITAK/SampleData.csv";
    string inputFile;
    bool done=false;
    bool used1=false;
    bool used2=false;
    int counter=0;
    while(!done) {
        cout << "Welcome to HW8! First, enter the file you'd like to use:\n"
                "note: the file included in project is SampleData.csv\n";
        cin >> inputFile;
        cout << "Which working analyzer would you like to use on that data?\n"
                "note: configurations have already been set for convenice\n";
                "note: only the first 500 records are used unless changed in dataSummation.\n";
             cout<<"1: PortScanAnalyzer\n"
                     "2: newAnalyzer\n"
                     "3: Quit\n";
        int choice;
        cin >> choice;
        if(choice>=3||choice<=0){
            done=true;
            break;
        }
        else {
            makeResults(choice,inputFile);
        }
        if(choice==1){
            used1=true;
        }
        else if(choice==2){
            used2=true;
        }
        if(used1==true&&used2==true){
            cout<<"Used all methods. Quitting...\n";
            done=true;
            break;
        }


    }
}
void UserInterface::makeResults(int n,string file){
    Configuration myPCAConfiguration;
    myPCAConfiguration.configurationParameters.add("Likely Attack Port Count", "12");
    myPCAConfiguration.configurationParameters.add("Possible Attack Port Count", "8");
    ifstream myfile("/Users/arisemery/CLionProjects/ITAK/"+file);
    if(n==1) {
        PortScanAnalyzer myPCA;
        myPCA.setConfigurations(myPCAConfiguration);
        ResultSet myResultSet = myPCA.run(myfile);
        myfile.close();
        myResultSet.print(cout);
    }
    else if(n==2){
        newAnalyzer myNA;
        myNA.setConfigurations(myNAConfiguration);
        ResultSet myResultSet = myNA.run(myfile);
        myfile.close();
        myResultSet.print(cout);
    }
};