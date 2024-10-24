#include "cpu.h"
#include "ram.h"
#include <iostream>

void CPUcompute() {

    int result = 0;
    for (int i = 0; i < 8; i++) {
        result += ramRead(i);
    }
    std::cout << "Result: " << result << std::endl;
}
