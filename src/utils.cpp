#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include "colors.hpp"
#include "banner.hpp"

using namespace std;

void sleep(int milliseconds) {
    this_thread::sleep_for(chrono::milliseconds(milliseconds));
}

int checkInput(const string& input){
    int parsed;
    try{
        parsed = stoi(input);
        if(parsed == 0)
            throw(input);
    }
    catch (const invalid_argument& e) {
        cout << RED << "Invalid Choice. Try again." << RESET << endl;
        sleep(500);
        return 0;
    } catch (const out_of_range& e) {
        cout << RED << "Invalid Choice. Try again." << RESET << endl;
        sleep(500);
        return 0;
    }
    catch(string in){
        cout << RED << "Invalid Choice. Try again." << RESET << endl;
        sleep(500);
        return 0;
    }
    return parsed;
}

string clearString(const string& str) {
    size_t first = str.find_first_not_of(" \n\r\t\f\v");
    //check if string is composed of only whitespaces
    if (first == string::npos)
        return "";
    size_t last = str.find_last_not_of(" \n\r\t\f\v");
    return str.substr(first, (last - first + 1));
}

string checkRequiredParam(string toolname){
    string choice;
    int convertedChoice;
    string cmd = toolname + " -H";
    string parameters;
    do{
        do{
            system("clear");
            printObjBanner();
            cout << GREEN << "To use " << toolname << " you need to specify at least one parameter." << RESET << endl;
            cout << CYAN << "1) Print parameters help" << RESET << endl;
            cout << CYAN << "2) Insert paramters and execute " << toolname << RESET << endl;
            cout << GREEN << "your choice: " << RESET;
            cin >> choice;
            convertedChoice = checkInput(choice);
        }while(convertedChoice == 0);

        if(convertedChoice == 1){
            system(cmd.c_str());
            cout << RED << "Press Enter to continue..." << RESET << endl;
            cin.get();
            cin.ignore();
        }
        if(convertedChoice != 1 && convertedChoice != 2){
            cout << RED << "Invalid Choice. Try again." << RESET << endl;
            sleep(500);
        }
    }while(convertedChoice != 2);
    cin.ignore();
    system("clear");
    printObjBanner();
    cout << GREEN << "Insert parameters as -> -shortform -shortform.... : " << RESET;
    getline(cin, parameters);

    return parameters;
}

string checkOptionalParam(string filename){

}
