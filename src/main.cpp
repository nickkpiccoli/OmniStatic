#include <iostream>
#include <string>

//ANSI colors for terminal output of the banner
const std::string BLUE = "\033[1;34m";
const std::string GREEN = "\033[1;32m";
const std::string CYAN = "\033[1;36m";
const std::string RESET = "\033[0m";

void printBanner() {
    std::cout << BLUE << R"(
   ____                  _  _____ _        _   _      
  / __ \                (_)/ ____| |      | | (_)     
 | |  | |_ __ ___  _ __  _| (___ | |_ __ _| |_ _  ___ 
 | |  | | '_ ` _ \| '_ \| |\___ \| __/ _` | __| |/ __|
 | |__| | | | | | | | | | |____) | || (_| | |_| | (__ 
  \____/|_| |_| |_|_| |_|_|_____/ \__\__,_|\__|_|\___|
)" << RESET << std::endl;

    std::cout << CYAN << "========================================\n";
    std::cout << "           OmniStatic                   \n";
    std::cout << "    Comprehensive Static Analysis Suite \n";
    std::cout << "   for Executables, PDFs, and Office Docs\n";
    std::cout << "========================================\n" << RESET;
}

int main() {
    printBanner();

    return 0;
}
