#ifndef MOTHERBOARD_CPP
#define MOTHERBOARD_CPP

#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Motherboard : public Komponen {
private:
    string chipset;
    string socketType;
    int maxRAMSlots;
    string formFactor;
public:
    Motherboard() {}

    Motherboard(string chipset, string socketType, int maxRAMSlots, string formFactor, string merk, string nama) 
        : Komponen(merk, nama) {
        this->chipset = chipset;
        this->socketType = socketType;
        this->maxRAMSlots = maxRAMSlots;
        this->formFactor = formFactor;
    }

    void setChipset(string chipset) {
        this->chipset = chipset;
    }

    void setSocketType(string socketType) {
        this->socketType = socketType;
    }

    void setMaxRAMSlots(int maxRAMSlots) {
        this->maxRAMSlots = maxRAMSlots;
    }

    void setFormFactor(string formFactor) {
        this->formFactor = formFactor;
    }

    string getChipset() {
        return this->chipset;
    }

    string getSocketType() {
        return this->socketType;
    }

    int getMaxRAMSlots() {
        return this->maxRAMSlots;
    }

    string getFormFactor() {
        return this->formFactor;
    }

    void displayInfo() override {
        Komponen::displayInfo();
        cout << " (Chipset: " << chipset << ", Socket: " << socketType << ", " 
             << maxRAMSlots << " RAM Slots, " << formFactor << ")";
    }

    ~Motherboard() {}
};

#endif // MOTHERBOARD_CPP