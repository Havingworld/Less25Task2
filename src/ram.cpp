#include "ram.h"

int buffer[8];

void ramWrite(int index, int value) {
    buffer[index] = value;
}

int ramRead(int index) {
    return buffer[index];
}

int getBuffer() {
    return *buffer;
}