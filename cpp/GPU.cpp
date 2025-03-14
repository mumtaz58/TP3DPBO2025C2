#ifndef GPU_CPP
#define GPU_CPP

#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class GPU : public Komponen {
private:
    int vram;
    string tipeGPU;
    float clockSpeedGHz;
public:
    GPU() {}

    GPU(int vram, string tipeGPU, float clockSpeedGHz, string merk, string nama) : Komponen(merk, nama) {
        this->vram = vram;
        this->tipeGPU = tipeGPU;
        this->clockSpeedGHz = clockSpeedGHz;
    }

    void setVram(int vram) {
        this->vram = vram;
    }

    void setTipeGPU(string tipeGPU) {
        this->tipeGPU = tipeGPU;
    }

    void setClockSpeedGHz(float clockSpeedGHz) {
        this->clockSpeedGHz = clockSpeedGHz;
    }

    int getVram() {
        return this->vram;
    }

    string getTipeGPU() {
        return this->tipeGPU;
    }

    float getClockSpeedGHz() {
        return this->clockSpeedGHz;
    }

    void displayInfo() override {
        Komponen::displayInfo();
        cout << " (" << vram << " GB VRAM) " << tipeGPU << " ~" << clockSpeedGHz << "GHz";
    }

    ~GPU() {}
};

#endif // GPU_CPP