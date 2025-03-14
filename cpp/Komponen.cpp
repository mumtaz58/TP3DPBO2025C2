#ifndef KOMPONEN_CPP
#define KOMPONEN_CPP

#include <iostream>
#include <string>

using namespace std;

class Komponen {
private:
    string merk;
    string nama;
public:
    Komponen() {}

    Komponen(string merk, string nama) {
        this->merk = merk;
        this->nama = nama;
    }

    void setMerk(string merk) {
        this->merk = merk;
    }

    void setNama(string nama) {
        this->nama = nama;
    }

    string getMerk() {
        return merk;
    }
    
    string getNama() {
        return nama;
    }

    virtual void displayInfo() {
        cout << "Merk: " << merk << ", Nama: " << nama;
    }

    ~Komponen() {}
};

#endif // KOMPONEN_CPP
