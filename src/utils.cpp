#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include "colors.hpp"

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
