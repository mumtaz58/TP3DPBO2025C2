from Komputer import Komputer
from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from GPU import GPU
from Monitor import Monitor
from Motherboard import Motherboard
from PowerSupply import PowerSupply
from Casing import Casing

def main():
    cpu = Cpu(8, 3.4, "Intel", "Core i7")
    
    ram_list = [
        Ram(16, "DDR5", "Corsair", "Vengeance"),
        Ram(8, "DDR4", "Corsair", "Vengeance")
    ]
    
    harddrive_list = [
        Harddrive(1024, "SSD", "Samsung", "Evo"),
        Harddrive(2000, "HDD", "Western Digital", "Blue")
    ]
    
    gpu = GPU(8, "RTX 3070", 1.70, "NVIDIA", "GeForce")
    
    monitor = Monitor("LG", "UltraGear", 27.0, 2560, 1440, 144)
    
    motherboard = Motherboard("Z690", "LGA1700", 4, "ATX", "ASUS", "ROG Strix")
    
    power_supply = PowerSupply(750, "80+ Gold", True, "Corsair", "RM750x")
    
    casing = Casing("ATX Mid Tower", 6, True, "Tempered Glass", "NZXT", "H510")

    komputer = Komputer("PC Gaming", cpu, ram_list, harddrive_list, gpu, monitor, motherboard, power_supply, casing)
    komputer.add_ram(Ram(16, "DDR5", "Kingston", "FURY"))
    komputer.add_harddrive(Harddrive(512, "M.2 NVMe", "Samsung", "980 Pro"))
   
    komputer.display_info()

if __name__ == "__main__":
    main()