#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include "colors.hpp"
#include "exeTools.hpp"
#include "banner.hpp"

using namespace std;

void stringsTool(const string& filename){
    system("clear");
    printStringsBanner();
    cout << GREEN << "Executing strings..." << RESET << endl;
    string command = "strings " + filename;
    this_thread::sleep_for(chrono::milliseconds(500));
    system(command.c_str());
    cout << RED << "Press Enter to continue..." << RESET << endl;
    cin.get();
}

void objdumpTool(const string& filename){
    string command;
    string parameters = "";
    int choice;
    do{
        system("clear");
        printObjBanner();
        cout << GREEN << "To use objdump you need to specify at least one parameter." << RESET << endl;
        cout << CYAN << "1) Print parameters help" << RESET << endl;
        cout << CYAN << "2) Insert paramters and execute objdump" << RESET << endl;
        cout << GREEN << "your choice: " << RESET;
        cin >> choice;
        if(choice == 1){
            system("objdump -H");
            cout << RED << "Press Enter to continue..." << RESET << endl;
            cin.get();
            cin.ignore();
        }
        if(choice != 1 && choice != 2){
            cout << RED << "Invalid Choice. Try again." << RESET << endl;
            this_thread::sleep_for(chrono::milliseconds(500));
        }
    }while(choice != 2);
    cin.ignore();
    system("clear");
    printObjBanner();
    cout << GREEN << "Insert parameters as -> -shortform -shortform.... : " << RESET;
    getline(cin, parameters);
    system("clear");
    printObjBanner();
    cout << GREEN << "Executing objdump..." << RESET << endl;
    command = "objdump " + parameters + " " + filename;
    cout << command << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    system(command.c_str());
    cout << RED << "Press Enter to continue..." << RESET << endl;
    cin.get();
}


void readelfTool(const string& filename){
    string command;
    string parameters = "";
    int choice;
    do{
        system("clear");
        printReadelfBanner();
        cout << GREEN << "To use readelf you need to specify at least one parameter." << RESET << endl;
        cout << CYAN << "1) Print parameters help" << RESET << endl;
        cout << CYAN << "2) Insert paramters and execute readelf" << RESET << endl;
        cout << GREEN << "your choice: " << RESET;
        cin >> choice;
        if(choice == 1){
            system("readelf -H");
            cout << RED << "Press Enter to continue..." << RESET << endl;
            cin.get();
            cin.ignore();
        }
        if(choice != 1 && choice != 2){
            cout << RED << "Invalid Choice. Try again." << RESET << endl;
            this_thread::sleep_for(chrono::milliseconds(500));
        }
    }while(choice != 2);
    cin.ignore();
    system("clear");
    printReadelfBanner();
    cout << GREEN << "Insert parameters as --> -shortform -shortform.... : " << RESET;
    getline(cin, parameters);
    system("clear");
    printReadelfBanner();
    cout << GREEN << "Executing readelf..." << RESET << endl;
    command = "readelf " + parameters + " " + filename;
    cout << command << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    system(command.c_str());
    cout << RED << "Press Enter to continue..." << RESET << endl;
    cin.get();
}