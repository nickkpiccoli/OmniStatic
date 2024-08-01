#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include "banner.hpp"
#include "colors.hpp"
#include "menu.hpp"
#include "exeTools.hpp"
#include "utils.hpp"

using namespace std;

void performExeAnalysis(){
    string filename = "";
    string choice;
    int convertedChoice;
    printExeBanner();
    cout << GREEN << "Insert filename of the executable to be analyzed: " << RESET;
    cin >> filename;
    filename = clearString(filename);
    do{
        do{
            system("clear");
            printExeBanner();
            cout << GREEN << "Analyzing file: " << RESET << filename << endl;
            printExeMenu();
            cout << GREEN << "your choice: " << RESET;
            cin >> choice;
            convertedChoice = checkInput(choice);
        }while(convertedChoice == 0);

        switch (convertedChoice)
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
                nmTool(filename);
                break;
            case 5:
                fileTool(filename);
                break;
            case 6:
                xxdTool(filename);
                break;
            case 7:
                system("clear");
                break;
            default:
                cout << RED << "Invalid Choice. Try again." << RESET << endl;
                break;
        }
    }while(convertedChoice != 7);
}