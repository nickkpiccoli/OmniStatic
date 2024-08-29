#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include "banner.hpp"
#include "colors.hpp"
#include "menu.hpp"
#include "pdfTools.hpp"
#include "utils.hpp"

using namespace std;

void performPdfAnalysis(){
    string filename = "";
    string choice;
    int convertedChoice;
    printPdfBanner();
    cout << GREEN << "Insert filename of the pdf to be analyzed(.pdf included): " << RESET;
    cin >> filename;
    filename = clearString(filename);
    do{
        do{
            system("clear");
            printPdfBanner();
            cout << GREEN << "Analyzing file: " << RESET << filename << endl;
            printPdfMenu();
            cout << GREEN << "your choice: " << RESET;
            cin >> choice;
            convertedChoice = checkInput(choice);
        }while(convertedChoice == 0);

        switch (convertedChoice)
        {
            case 1:
                pdfinfoTool(filename);
                break;
            case 2:
                exiftoolTool(filename);
                break;
            case 3:
                system("clear");
                break;
            default:
                cout << RED << "Invalid Choice. Try again." << RESET << endl;
                break;
        }
    }while(convertedChoice != 3);
}