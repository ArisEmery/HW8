//
// Created by Aris  Emery on 4/17/17.
//

#ifndef ITAK_UTILS_H
#define ITAK_UTILS_H
#include <string>
#include <fstream>
//This code was written by Dr. Clyde for the georegions assignment and used with permission here
std::string getStringInput(std::string prompt);

bool split(const std::string& s, char delimiter, std::string elements[], int expectedNumberOfElements);
int convertStringToInt(const std::string& s, bool* valid = nullptr);
unsigned int convertStringToUnsignedInt(const std::string& s, bool* valid = nullptr);
double convertStringToDouble(const std::string& s, bool* valid = nullptr);

std::string leftTrim(const std::string &str);
std::string rightTrim(const std::string &str);
std::string trim(const std::string& str);
bool IsNotWhiteSpace (char ch);
#endif //ITAK_UTILS_H
