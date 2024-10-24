#include "disk.h"
#include "ram.h"
#include <fstream>
#include <iostream>

void diskSave(int& buffer) {

    std::ofstream file("data.txt", std::fstream::out);

    if (file.is_open()) {
        for (int i = 0; i < 8; i++) {
            file << ramRead(i) << " ";
        }
        file.close();
        std::cout << "Save complite" << std::endl;
    }
    else {
        std::cout << "file is don't open!" << std::endl;
    }
}

void diskLoad() {
    std::ifstream file("data.txt", std::fstream::in);
    if (file.is_open()) {
        for (int i = 0; i < 8; i++) {
            int value;
            file >> value;
            ramWrite(i, value);
        }
        file.close();
        std::cout << "Load complite" << std::endl;
    }
    else {
        std::cout << "file is don't open!" << std::endl;
    }
}