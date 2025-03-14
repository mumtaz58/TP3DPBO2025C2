from Cpu import Cpu
from Harddrive import Harddrive
from Ram import Ram
from GPU import GPU
from Monitor import Monitor
from Motherboard import Motherboard
from PowerSupply import PowerSupply
from Casing import Casing

class Komputer:
    def __init__(self, nama="", cpu=None, ram_list=None, harddrive_list=None,
                 gpu=None, monitor=None, motherboard=None, power_supply=None, casing=None):
        self.nama = nama
        self.cpu = cpu if cpu is not None else Cpu()
        self.ram_list = ram_list if ram_list is not None else []
        self.harddrive_list = harddrive_list if harddrive_list is not None else []
        self.gpu = gpu if gpu is not None else GPU()
        self.monitor = monitor if monitor is not None else Monitor()
        self.motherboard = motherboard if motherboard is not None else Motherboard()
        self.power_supply = power_supply if power_supply is not None else PowerSupply()
        self.casing = casing if casing is not None else Casing()
    
    def set_nama(self, nama):
        self.nama = nama
    
    def set_cpu(self, cpu):
        self.cpu = cpu
    
    def set_ram_list(self, ram_list):
        self.ram_list = ram_list
    
    def set_harddrive_list(self, harddrive_list):
        self.harddrive_list = harddrive_list
    
    def set_gpu(self, gpu):
        self.gpu = gpu
    
    def set_monitor(self, monitor):
        self.monitor = monitor
    
    def set_motherboard(self, motherboard):
        self.motherboard = motherboard
    
    def set_power_supply(self, power_supply):
        self.power_supply = power_supply
    
    def set_casing(self, casing):
        self.casing = casing
    
    def add_ram(self, ram):
        self.ram_list.append(ram)
    
    def add_harddrive(self, harddrive):
        self.harddrive_list.append(harddrive)
    
    def get_nama(self):
        return self.nama
    
    def get_cpu(self):
        return self.cpu
    
    def get_ram_list(self):
        return self.ram_list
    
    def get_harddrive_list(self):
        return self.harddrive_list
    
    def get_gpu(self):
        return self.gpu
    
    def get_monitor(self):
        return self.monitor
    
    def get_motherboard(self):
        return self.motherboard
    
    def get_power_supply(self):
        return self.power_supply
    
    def get_casing(self):
        return self.casing
    
    def display_info(self):
        print("Informasi Komputer:")
        print(f"Nama      : {self.nama}")
        
        print("Cpu       : ", end="")
        self.cpu.display_info()
        print()
        
        print("Motherboard: ", end="")
        self.motherboard.display_info()
        print()
        
        for i, ram in enumerate(self.ram_list):
            print(f"Ram {i+1}      : ", end="")
            ram.display_info()
            print()
        
        for i, harddrive in enumerate(self.harddrive_list):
            print(f"Harddrive {i+1}: ", end="")
            harddrive.display_info()
            print()
        
        print("GPU       : ", end="")
        self.gpu.display_info()
        print()
        
        print("Power Supply: ", end="")
        self.power_supply.display_info()
        print()
        
        print("Casing    : ", end="")
        self.casing.display_info()
        print()
        
        print("Monitor   : ", end="")
        self.monitor.display_info()
        print()