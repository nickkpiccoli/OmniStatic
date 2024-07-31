#include "banner.hpp"
#include "colors.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string centerText(const string& text) {
    int padSize = (TERMINAL_WIDTH - text.size()) / 2;
    string padding(padSize, ' ');
    return padding + text;
}

void printMainBanner() {
    vector<string> bannerLines = {
        "   ____                  _  _____ _        _   _      ",
        "  / __ \\                (_)/ ____| |      | | (_)     ",
        " | |  | |_ __ ___  _ __  _| (___ | |_ __ _| |_ _  ___ ",
        " | |  | | '_ ` _ \\| '_ \\| |\\___ \\| __/ _` | __| |/ __|",
        " | |__| | | | | | | | | | |____) | || (_| | |_| | (__ ",
        "  \\____/|_| |_| |_|_| |_|_|_____/ \\__\\__,_|\\__|_|\\___|",
    };

    for (const auto& line : bannerLines) {
        cout << BLUE << centerText(line) << RESET << endl;
    }

    cout << CYAN << centerText("================================================") << endl;
    cout << centerText("           OmniStatic                   ") << endl;
    cout << centerText("    Comprehensive Static Analysis Suite ") << endl;
    cout << centerText("   for Executables, PDFs, and Office Docs") << endl;
    cout << centerText("================================================") << RESET << endl;

    cout << endl;
    cout << endl;
}

void printExeBanner(){
    system("clear");
    std::vector<std::string> bannerLines = {
        "  ______                     _        _     _         __ _ _      ",
        " |  ____|                   | |      | |   | |       / _(_) |     ",
        " | |__  __  _____  ___ _   _| |_ __ _| |__ | | ___  | |_ _| | ___ ",
        " |  __| \\ \\/ / _ \\/ __| | | | __/ _` | '_ \\| |/ _ \\ |  _| | |/ _ \\",
        " | |____ >  <  __/ (__| |_| | || (_| | |_) | |  __/ | | | | |  __/",
        " |______/_/\\_\\___|\\___|\\__,_|\\__\\__,_|_.__/|_|\\___| |_| |_|_|\\___|",
        "                                                                 ",
        "                                                                 "
    };

    for (const auto& line : bannerLines) {
        std::cout << BLUE << centerText(line) << RESET << std::endl;
    }

}

void printPdfBanner(){
    system("clear");
    std::vector<std::string> asciiArtLines = {
        "  _____    _  __    __ _ _      ",
        " |  __ \\  | |/ _|  / _(_) |     ",
        " | |__) |_| | |_  | |_ _| | ___ ",
        " |  ___/ _` |  _| |  _| | |/ _ \\",
        " | |  | (_| | |   | | | | |  __/",
        " |_|   \\__,_|_|   |_| |_|_|\\___|",
        "                                ",
        "                                "
    };

    for (const auto& line : asciiArtLines) {
        std::cout << BLUE << centerText(line) << RESET << std::endl;
    }

}

void printOfficeBanner(){
    system("clear");
    std::vector<std::string> asciiArtLines = {
        "   ____   __  __ _             __ _ _      ",
        "  / __ \\ / _|/ _(_)           / _(_) |     ",
        " | |  | | |_| |_ _  ___ ___  | |_ _| | ___ ",
        " | |  | |  _|  _| |/ __/ _ \\ |  _| | |/ _ \\",
        " | |__| | | | | | | (_|  __/ | | | | |  __/",
        "  \\____/|_| |_| |_|\\___\\___| |_| |_|_|\\___|",
        "                                           ",
        "                                           "
    };

    for (const auto& line : asciiArtLines) {
        std::cout << BLUE << centerText(line) << RESET << std::endl;
    }

}
