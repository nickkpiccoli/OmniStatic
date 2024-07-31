#include <iostream>
#include <string>
#include <vector>
#include "banner.hpp"
#include "colors.hpp"
#include "menu.hpp"
#include "exeTools.hpp"

using namespace std;


string clearString(const string& str) {
    size_t first = str.find_first_not_of(" \n\r\t\f\v");
    //check if string is composed of only whitespaces
    if (first == string::npos)
        return "";
    size_t last = str.find_last_not_of(" \n\r\t\f\v");
    return str.substr(first, (last - first + 1));
}

void performExeAnalysis(){
    string filename = "";
    int choice;
    printExeBanner();
    cout << GREEN << "Insert filename of the executable to be analyzed: " << RESET;
    cin >> filename;
    filename = clearString(filename);
    do{
        printExeBanner();
        cout << GREEN << "Analyzing file: " << RESET << filename << endl;
        printExeMenu();
        cout << GREEN << "your choice: " << RESET;
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
            case 1:
                stringsTool(filename);
                break;
            case 2:
                objdumpTool(filename);
                break;
            case 3:
                readelfTool(filename);
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                system("clear");
                break;
            default:
                cout << RED << "Invalid Choice. Try again." << RESET << endl;
                break;
        }
    }while(choice != 7);
}