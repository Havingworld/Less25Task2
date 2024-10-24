#include "cpu.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"
#include "ram.h"

using namespace std;

int main() {
    std::string command{""};
    while (command != "exit") {
        std::cout << "Enter command (sum, save, load, input, display, exit): ";
        std::cin >> command;

        if (command == "sum") {
            CPUcompute();
        }
        else if (command == "save") {
            diskSave(*buffer);
        }
        else if (command == "load") {
            diskLoad();
        }
        else if (command == "input") {
            keyboardInput();
        }
        else if (command == "display") {
            gpuDisplay();
        }
    }

	return 0;
}
