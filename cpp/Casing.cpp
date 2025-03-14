#ifndef CASING_CPP
#define CASING_CPP

#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Casing : public Komponen {
private:
    string formFactor;
    int maxFans;
    bool rgbSupport;
    string material;
public:
    Casing() {}

    Casing(string formFactor, int maxFans, bool rgbSupport, string material, string merk, string nama) 
        : Komponen(merk, nama) {
        this->formFactor = formFactor;
        this->maxFans = maxFans;
        this->rgbSupport = rgbSupport;
        this->material = material;
    }

    void setFormFactor(string formFactor) {
        this->formFactor = formFactor;
    }

    void setMaxFans(int maxFans) {
        this->maxFans = maxFans;
    }

    void setRgbSupport(bool rgbSupport) {
        this->rgbSupport = rgbSupport;
    }

    void setMaterial(string material) {
        this->material = material;
    }

    string getFormFactor() {
        return this->formFactor;
    }

    int getMaxFans() {
        return this->maxFans;
    }

    bool hasRgbSupport() {
        return this->rgbSupport;
    }

    string getMaterial() {
        return this->material;
    }

    void displayInfo() override {
        Komponen::displayInfo();
        cout << " (" << formFactor << ", " << maxFans << " Fans, " 
             << (rgbSupport ? "RGB Support" : "No RGB") << ", " << material << ")";
    }

    ~Casing() {}
};

#endif // CASING_CPP
