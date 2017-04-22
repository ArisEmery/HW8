//
// Created by Aris  Emery on 4/17/17.
//

#ifndef ITAK_CONFIGURATION_H
#define ITAK_CONFIGURATION_H


#include "Dictionary.h"
#include "util.h"
using namespace std;
class Configuration {

public:
    Configuration(){};
    Dictionary<string, string> configurationParameters;
    string getStringValue(string name);
    int getIntValue(string name);
    double getDoubleValue(string name);
    //TODO SHOULD THE GET VALUE FUNCTION BE ASKING IF IT'S WANTED AS A STRING OR INT? HOW DO WE TELL?
    //TODO also separate this into .h/.cpp files as needed.
    /*
  A Configuration should be able get the value of parameter given its name
          i. A Configuration should include a method for returning the value as a string
  ii. A Configuration should include a method for returning the value as an integer
  iii. A Configuration should include a method for returning the value as an double
  */










    //DR. CLYDE'S FUNCTIONS
    /*
    bool IsNotWhiteSpace (char ch) {
        return !std::isspace<char>(ch , std::locale::classic() );
    }

    std::string leftTrim(const std::string &inputStr) {
        std::string str = inputStr;
        auto it2 =  std::find_if( str.begin() , str.end() , IsNotWhiteSpace );
        str.erase( str.begin() , it2);
        return str;
    }

// Removes trailing whitespace, include space, tabs, newlines, and returns
    std::string rightTrim(const std::string &inputStr)
    {
        std::string str = inputStr;
        auto it1 =  std::find_if( str.rbegin() , str.rend() , IsNotWhiteSpace );
        str.erase( it1.base() , str.end() );
        return str;
    }

// Removes leading and trailing whitespace, include space, tabs, newlines, and returns
    std::string trim(const std::string& str) {
        return leftTrim(rightTrim(str));
    }

    int convertStringToInt(const std::string& s, bool* valid)
    {
        int result = 0;
        if (valid!= nullptr)
            *valid = false;

        std::size_t numberOfConvertedCharacters = 0;
        if (s!="")
        {
            try {
                std::string trimmedString = trim(s);
                result = std::stoi(trimmedString, &numberOfConvertedCharacters);
                if (valid!=nullptr && numberOfConvertedCharacters==trimmedString.length())
                    *valid = true;
                else if (numberOfConvertedCharacters!=trimmedString.length())
                    result = 0;
            }
            catch (std::exception)
            {
                // do nothing, let the result remain 0 and the valid flag false
            }
        }

        return result;
    }
    double convertStringToDouble(const std::string& s, bool* valid)
    {
        double result = 0;
        if (valid!= nullptr)
            *valid = false;

        std::size_t numberOfConvertedCharacters = 0;
        if (s!="")
        {
            try {
                std::string trimmedString = trim(s);
                result = std::stod(trimmedString, &numberOfConvertedCharacters);
                if (valid!=nullptr && numberOfConvertedCharacters==trimmedString.length())
                    *valid = true;
                else if (numberOfConvertedCharacters!=trimmedString.length())
                    result = 0;
            }
            catch (std::exception)
            {
                // do nothing, let the result remain 0 and the valid flag false
            }
        }

        return result;
    }
    */
};


#endif //ITAK_CONFIGURATION_H
