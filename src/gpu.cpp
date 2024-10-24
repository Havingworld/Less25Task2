#include "gpu.h"
#include "ram.h"
#include <iostream>

void gpuDisplay() {
    for (int i = 0; i < 8; i++) {
        std::cout << ramRead(i) << " ";
    }
    std::cout << std::endl;
}