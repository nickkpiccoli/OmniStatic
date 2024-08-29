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

void printStringsBanner(){
    system("clear");
    std::vector<std::string> asciiArtLines = {
        "   _____ _        _                 ",
        "  / ____| |      (_)                ",
        " | (___ | |_ _ __ _ _ __   __ _ ___ ",
        "  \\___ \\| __| '__| | '_ \\ / _` / __|",
        "  ____) | |_| |  | | | | | (_| \\__ \\",
        " |_____/ \\__|_|  |_|_| |_|\\__, |___/",
        "                           __/ |    ",
        "                          |___/     "
    };

    for (const auto& line : asciiArtLines) {
        std::cout << BLUE << centerText(line) << RESET << std::endl;
    }

}

void printObjBanner(){
    system("clear");
    std::vector<std::string> asciiArtLines = {
        "   ____  _     _     _                       ",
        "  / __ \\| |   (_)   | |                      ",
        " | |  | | |__  _  __| |_   _ _ __ ___  _ __  ",
        " | |  | | '_ \\| |/ _` | | | | '_ ` _ \\| '_ \\ ",
        " | |__| | |_) | | (_| | |_| | | | | | | |_) |",
        "  \\____/|_.__/| |\\__,_|\\__,_|_| |_| |_| .__/ ",
        "             _/ |                     | |    ",
        "            |__/                      |_|    "
    };

    for (const auto& line : asciiArtLines) {
        std::cout << BLUE << centerText(line) << RESET << std::endl;
    }

}

void printReadelfBanner(){
    system("clear");
    std::vector<std::string> asciiArtLines = {
        "  _____                _      _  __ ",
        " |  __ \\              | |    | |/ _|",
        " | |__) |___  __ _  __| | ___| | |_ ",
        " |  _  // _ \\/ _` |/ _` |/ _ \\ |  _|",
        " | | \\ \\  __/ (_| | (_| |  __/ | |  ",
        " |_|  \\_\\___|\\__,_|\\__,_|\\___|_|_|  ",
        "                                    ",
        "                                    "
    };

    for (const auto& line : asciiArtLines) {
        std::cout << BLUE << centerText(line) << RESET << std::endl;
    }

}

void printNmBanner(){
    system("clear");
    std::vector<std::string> asciiArtLines =  {
        "  _   _           ",
        " | \\ | |          ",
        " |  \\| |_ __ ___  ",
        " | . ` | '_ ` _ \\ ",
        " | |\\  | | | | | |",
        " |_| \\_|_| |_| |_|",
        "                  ",
        "                  "
    };

    for (const auto& line : asciiArtLines) {
        std::cout << BLUE << centerText(line) << RESET << std::endl;
    }

}

void printFileBanner(){
    system("clear");
    std::vector<std::string> asciiArtLines = {
        "  ______ _ _      ",
        " |  ____(_) |     ",
        " | |__   _| | ___ ",
        " |  __| | | |/ _ \\",
        " | |    | | |  __/",
        " |_|    |_|_|\\___|",
        "                  ",
        "                  "
    };

    for (const auto& line : asciiArtLines) {
        std::cout << BLUE << centerText(line) << RESET << std::endl;
    }

}

void printXxdBanner(){
    system("clear");
    std::vector<std::string> asciiArtLines = {
        " __   __         _ ",
        " \\ \\ / /        | |",
        "  \\ V / __  ____| |",
        "   > <  \\ \\/ / _` |",
        "  / . \\  >  < (_| |",
        " /_/ \\_\\/_/\\_\\__,_|",
        "                   ",
        "                   "
    };

    for (const auto& line : asciiArtLines) {
        std::cout << BLUE << centerText(line) << RESET << std::endl;
    }

}

void printPdfinfoBanner() {
    system("clear");

    std::vector<std::string> asciiArtLines = {
        "  _____    _  __ _        __      ",
        " |  __ \\  | |/ _(_)      / _|     ",
        " | |__) |_| | |_ _ _ __ | |_ ___  ",
        " |  ___/ _` |  _| | '_ \\|  _/ _ \\ ",
        " | |  | (_| | | | | | | | || (_) |",
        " |_|   \\__,_|_| |_|_| |_|_| \\___/ ",
        "                                  ",
        "                                  "
    };

    for (const auto& line : asciiArtLines) {
        std::cout << BLUE << centerText(line) << RESET << std::endl;
    }
}

void printExiftoolBanner() {
    system("clear");

    std::vector<std::string> asciiArtLines = {
        "  ______      _  __ _              _ ",
        " |  ____|    (_)/ _| |            | |",
        " | |__  __  ___| |_| |_ ___   ___ | |",
        " |  __| \\ \\/ / |  _| __/ _ \\ / _ \\| |",
        " | |____ >  <| | | | || (_) | (_) | |",
        " |______/_/\\_\\_|_|  \\__\\___/ \\___/|_|",
        "                                      ",
        "                                      "
    };

    for (const auto& line : asciiArtLines) {
        std::cout << BLUE << centerText(line) << RESET << std::endl;
    }
}