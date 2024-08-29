#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include "colors.hpp"
#include "exeTools.hpp"
#include "banner.hpp"
#include "utils.hpp"

using namespace std;

void stringsTool(const string& filename){
    system("clear");
    printStringsBanner();
    cout << GREEN << "Executing strings..." << RESET << endl;
    string command = "strings " + filename;
    sleep(500);
    system(command.c_str());
    cin.ignore();
    cout << RED << "Press Enter to continue..." << RESET << endl;
    cin.get();
}

void objdumpTool(const string& filename){
    string command;
    string parameters = "";
    parameters = checkRequiredParam("objdump");
    system("clear");
    printObjBanner();
    cout << GREEN << "Executing objdump..." << RESET << endl;
    command = "objdump " + parameters + " " + filename;
    cout << command << endl;
    sleep(500);
    system(command.c_str());
    cout << RED << "Press Enter to continue..." << RESET << endl;
    cin.get();
}


void readelfTool(const string& filename){
    string command;
    string parameters = "";
    parameters = checkRequiredParam("readelf");
    system("clear");
    printReadelfBanner();
    cout << GREEN << "Executing readelf..." << RESET << endl;
    command = "readelf " + parameters + " " + filename;
    cout << command << endl;
    sleep(500);
    system(command.c_str());
    cout << RED << "Press Enter to continue..." << RESET << endl;
    cin.get();
}

void nmTool(const string& filename){
    system("clear");
    printNmBanner();
    cout << GREEN << "Executing nm..." << RESET << endl;
    string command = "nm " + filename;
    sleep(500);
    system(command.c_str());
    cin.ignore();
    cout << RED << "Press Enter to continue..." << RESET << endl;
    cin.get();
}

void fileTool(const string& filename){
    system("clear");
    printFileBanner();
    cout << GREEN << "Executing file..." << RESET << endl;
    string command = "file " + filename;
    sleep(500);
    system(command.c_str());
    cin.ignore();
    cout << RED << "Press Enter to continue..." << RESET << endl;
    cin.get();
}

void xxdTool(const string& filename){
    system("clear");
    printXxdBanner();
    cout << GREEN << "Executing xxd..." << RESET << endl;
    string command = "xxd " + filename;
    sleep(500);
    system(command.c_str());
    cin.ignore();
    cout << RED << "Press Enter to continue..." << RESET << endl;
    cin.get();
}