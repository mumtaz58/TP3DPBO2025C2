#ifndef KOMPUTER_CPP
#define KOMPUTER_CPP

#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "Harddrive.cpp"
#include "Ram.cpp"
#include "GPU.cpp"
#include "Monitor.cpp"
#include "Motherboard.cpp"
#include "PowerSupply.cpp"
#include "Casing.cpp"

using namespace std;

class Komputer {
private:
    string nama;
    Cpu cpu;
    vector<Ram> ramList;
    vector<Harddrive> harddriveList;
    GPU gpu;
    Monitor monitor;
    Motherboard motherboard;
    PowerSupply powerSupply;
    Casing casing;
public:
    Komputer() {}

    Komputer(string nama, Cpu cpu, vector<Ram> ramList, vector<Harddrive> harddriveList, 
             GPU gpu, Monitor monitor, Motherboard motherboard, PowerSupply powerSupply, Casing casing) {
        this->nama = nama;
        this->cpu = cpu;
        this->ramList = ramList;
        this->harddriveList = harddriveList;
        this->gpu = gpu;
        this->monitor = monitor;
        this->motherboard = motherboard;
        this->powerSupply = powerSupply;
        this->casing = casing;
    }

    void setNama(string nama) {
        this->nama = nama;
    }

    void setCpu(Cpu cpu) {
        this->cpu = cpu;
    }

    void setRamList(vector<Ram> ramList) {
        this->ramList = ramList;
    }    
   
    void setHarddriveList(vector<Harddrive> harddriveList) {
        this->harddriveList = harddriveList;
    }

    void setGPU(GPU gpu) {
        this->gpu = gpu;
    }

    void setMonitor(Monitor monitor) {
        this->monitor = monitor;
    }

    void setMotherboard(Motherboard motherboard) {
        this->motherboard = motherboard;
    }

    void setPowerSupply(PowerSupply powerSupply) {
        this->powerSupply = powerSupply;
    }

    void setCasing(Casing casing) {
        this->casing = casing;
    }

    void addRam(Ram ram) {
        this->ramList.push_back(ram);
    }

    void addHarddrive(Harddrive harddrive) {
        this->harddriveList.push_back(harddrive);
    }

    string getNama() {
        return this->nama;
    }

    Cpu getCpu() {
        return this->cpu;
    }

    vector<Ram> getRamList() {
        return this->ramList;
    }

    vector<Harddrive> getHarddriveList() {
        return this->harddriveList;
    }

    GPU getGPU() {
        return this->gpu;
    }

    Monitor getMonitor() {
        return this->monitor;
    }

    Motherboard getMotherboard() {
        return this->motherboard;
    }

    PowerSupply getPowerSupply() {
        return this->powerSupply;
    }

    Casing getCasing() {
        return this->casing;
    }

    void displayInfo() {
        cout << "Informasi Komputer:" << endl;
        cout << "Nama      : " << nama << endl;
        
        cout << "Cpu       : ";
        cpu.displayInfo();
        cout << endl;
        
        cout << "Motherboard: ";
        motherboard.displayInfo();
        cout << endl;
        
        for (int i = 0; i < ramList.size(); i++) {
            cout << "Ram " << (i+1) << "      : ";
            ramList[i].displayInfo();
            cout << endl;
        }
        
        for (int i = 0; i < harddriveList.size(); i++) {
            cout << "Harddrive " << (i+1) << ": ";
            harddriveList[i].displayInfo();
            cout << endl;
        }
        
        cout << "GPU       : ";
        gpu.displayInfo();
        cout << endl;
        
        cout << "Power Supply: ";
        powerSupply.displayInfo();
        cout << endl;
        
        cout << "Casing    : ";
        casing.displayInfo();
        cout << endl;
        
        cout << "Monitor   : ";
        monitor.displayInfo();
        cout << endl;
    }

    ~Komputer() {}
};

#endif // KOMPUTER_CPP
