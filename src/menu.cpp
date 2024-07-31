#include "colors.hpp"
#include <iostream>

void printDocTypeMenu(){
    cout << GREEN << "Select a document type to be analyzed:" << RESET << endl;
    cout << RED << "1) Executable file" << RESET << endl;
    cout << RED << "2) Pdf file" << RESET << endl;
    cout << RED << "3) Office file" << RESET << endl;
    cout << CYAN << "4) Exit" << RESET << endl;
}

void printExeMenu(){
    cout << GREEN << "Select the tool to analyze your executable:" << RESET << endl;
    cout << RED << "1) Strings - extracts and shows strings of the binary file" << RESET << endl;
    cout << RED << "2) Objdump - shows detailed info of the binary file" << RESET << endl;
    cout << RED << "3) Readelf - shows elf info of the binary file" << RESET << endl;
    cout << RED << "4) Nm - shows symbol table of the binary file" << RESET << endl;
    cout << RED << "5) File - shows file type" << RESET << endl;
    cout << RED << "6) Xxd - shows binary in hex and bin format" << RESET << endl;
    cout << CYAN << "7) Back to principal menu" << RESET << endl;
}

void printPdfMenu(){
    cout << GREEN << "Select a document type to be analyzed:" << RESET << endl;
    cout << RED << "1) Executable file" << RESET << endl;
    cout << RED << "2) Pdf file" << RESET << endl;
    cout << RED << "3) Office file" << RESET << endl;
    cout << CYAN << "4) Exit" << RESET << endl;
}

void printOfficeMenu(){
    cout << GREEN << "Select a document type to be analyzed:" << RESET << endl;
    cout << RED << "1) Executable file" << RESET << endl;
    cout << RED << "2) Pdf file" << RESET << endl;
    cout << RED << "3) Office file" << RESET << endl;
    cout << CYAN << "4) Exit" << RESET << endl;
}