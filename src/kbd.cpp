#include "kbd.h"
#include "ram.h"
#include <iostream>

void keyboardInput() {
    for (int i = 0; i < 8; i++) {
        int value;
        std::cout << "input num #" << i + 1 << ": ";
        std::cin >> value;
        ramWrite(i, value);
    }
}