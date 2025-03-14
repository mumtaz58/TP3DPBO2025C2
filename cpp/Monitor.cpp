#ifndef MONITOR_CPP
#define MONITOR_CPP

#include <iostream>
#include <string>

using namespace std;

class Monitor {
private:
    string merk;
    string model;
    float ukuranInch;
    int resolusiX;
    int resolusiY;
    int refreshRate;
public:
    Monitor() {}

    Monitor(string merk, string model, float ukuranInch, int resolusiX, int resolusiY, int refreshRate) {
        this->merk = merk;
        this->model = model;
        this->ukuranInch = ukuranInch;
        this->resolusiX = resolusiX;
        this->resolusiY = resolusiY;
        this->refreshRate = refreshRate;
    }

    void setMerk(string merk) {
        this->merk = merk;
    }

    void setModel(string model) {
        this->model = model;
    }

    void setUkuranInch(float ukuranInch) {
        this->ukuranInch = ukuranInch;
    }

    void setResolusi(int resolusiX, int resolusiY) {
        this->resolusiX = resolusiX;
        this->resolusiY = resolusiY;
    }

    void setRefreshRate(int refreshRate) {
        this->refreshRate = refreshRate;
    }

    string getMerk() {
        return this->merk;
    }

    string getModel() {
        return this->model;
    }

    float getUkuranInch() {
        return this->ukuranInch;
    }

    int getResolusiX() {
        return this->resolusiX;
    }

    int getResolusiY() {
        return this->resolusiY;
    }

    int getRefreshRate() {
        return this->refreshRate;
    }

    void displayInfo() {
        cout << merk << " " << model << " " << ukuranInch << "\" " 
             << resolusiX << "x" << resolusiY << " " << refreshRate << "Hz";
    }

    ~Monitor() {}
};

#endif // MONITOR_CPP