#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include "colors.hpp"
#include "pdfTools.hpp"
#include "banner.hpp"
#include "utils.hpp"

using namespace std;

///TODO ADD PARAMETERS CHOICE

void pdfinfoTool(const string& filename){
    system("clear");
    printPdfinfoBanner();
    cout << GREEN << "Executing pdfinfo..." << RESET << endl;
    string command = "pdfinfo " + filename;
    sleep(500);
    system(command.c_str());
    cin.ignore();
    cout << RED << "Press Enter to continue..." << RESET << endl;
    cin.get();
}

void exiftoolTool(const string& filename){
    system("clear");
    printExiftoolBanner();
    cout << GREEN << "Executing exiftool..." << RESET << endl;
    string command = "exiftool " + filename;
    sleep(500);
    system(command.c_str());
    cin.ignore();
    cout << RED << "Press Enter to continue..." << RESET << endl;
    cin.get();
}

