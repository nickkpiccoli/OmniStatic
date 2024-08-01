#include <iostream>
#include <string>
#include <vector>
#include "banner.hpp"
#include "colors.hpp"
#include "menu.hpp"
#include "exeAnalysis.hpp"
#include "utils.hpp"

using namespace std;

int main() {
    string choice;
    int convertedChoice;
    

    do{
        do{
            system("clear");
            printMainBanner();
            printDocTypeMenu();
            cout << GREEN << "your choice: " << RESET;
            cin >> choice;
            convertedChoice = checkInput(choice);
        }while(convertedChoice == 0);

        switch (convertedChoice)
        {
            case 1:
                //TODO ADD FILE SAVING AND OPTIONAL PARAMETERS IN NO PARAMETERS TOOLS 
                performExeAnalysis();
                break;
            case 2:
                printPdfBanner();
                sleep(2000);
                break;
            case 3:
                printOfficeBanner();
                sleep(2000);
                break;
            case 4:
                system("clear");
                cout << GREEN << "Exiting..." << RESET << endl;
                sleep(1000);
                break;
            default:
                cout << RED << "Invalid Choice. Try again." << RESET << endl;
                sleep(1000);
                break;
        }

    }while(convertedChoice != 4);
    
    return 0;
}
