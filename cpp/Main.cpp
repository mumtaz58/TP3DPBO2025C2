#include <iostream>
#include <string>
#include <vector>
#include "Komputer.cpp"

using namespace std;

int main() {
    Cpu cpu(8, 3.4, "Intel", "Core i7");
    
    vector<Ram> ramList = {
        Ram(16, "DDR5", "Corsair", "Vengeance"),
        Ram(8, "DDR4", "Corsair", "Vengeance")
    };
    
    vector<Harddrive> harddriveList = {
        Harddrive(1024, "SSD", "Samsung", "Evo"),
        Harddrive(2000, "HDD", "Western Digital", "Blue")
    };
    
    GPU gpu(8, "RTX 3070", 1.70, "NVIDIA", "GeForce");
    
    Monitor monitor("LG", "UltraGear", 27.0, 2560, 1440, 144);
    
    Motherboard motherboard("Z690", "LGA1700", 4, "ATX", "ASUS", "ROG Strix");
    
    PowerSupply powerSupply(750, "80+ Gold", true, "Corsair", "RM750x");
    
    Casing casing("ATX Mid Tower", 6, true, "Tempered Glass", "NZXT", "H510");

    Komputer komputer("PC Gaming", cpu, ramList, harddriveList, gpu, monitor, motherboard, powerSupply, casing);
    komputer.addRam(Ram(16, "DDR5", "Kingston", "FURY"));
    komputer.addHarddrive(Harddrive(512, "M.2 NVMe", "Samsung", "980 Pro"));
   
    komputer.displayInfo();

    return 0;
}