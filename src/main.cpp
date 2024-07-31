#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include "banner.hpp"
#include "colors.hpp"
#include "menu.hpp"
#include "exeAnalysis.hpp"

using namespace std;

void sleep(int milliseconds) {
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

int main() {
    int choice;
    

    do{
        system("clear");
        printMainBanner();
        printDocTypeMenu();
        cout << GREEN << "your choice:" << RESET;
        cin >> choice;

        switch (choice)
        {
            case 1:
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

    }while(choice != 4);
    
    return 0;
}
