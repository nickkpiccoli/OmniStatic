#include <iostream>
#include <string>
#include <vector>
#include "colors.hpp"
#include "exeTools.hpp"
#include "banner.hpp"


void stringsTool(const string& filename){
    system("clear");
    printStringsBanner();
    string command = "strings " + filename;
    system(command.c_str());
    cout << "Press Enter to continue...";
    cin.get();
}