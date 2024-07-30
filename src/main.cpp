#include <iostream>
#include <string>
#include <vector>
#include "colors.hpp"
#include "banner.hpp"

using namespace std;

int main() {
    int choice;
    printMainBanner();

    do{
        printDocTypeMenu();
        cout << GREEN << "your choice:" << RESET;
        cin >> choice;

        switch (choice)
        {
            case 1:
                printExeBanner();
                break;
            case 2:
                printPdfBanner();
                break;
            case 3:
                printOfficeBanner();
                break;
            case 4:
                cout << GREEN << "Exiting..." << RESET << endl;
                break;
            default:
                cout << RED << "Invalid Choice. Try again." << RESET << endl;
                break;
        }

    }while(choice != 4);
    
    return 0;
}
