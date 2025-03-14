from Komponen import Komponen

class PowerSupply(Komponen):
    def __init__(self, wattage=0, certification="", modular=False, merk="", nama=""):
        super().__init__(merk, nama)
        self.wattage = wattage
        self.certification = certification
        self.modular = modular
    
    def set_wattage(self, wattage):
        self.wattage = wattage
    
    def set_certification(self, certification):
        self.certification = certification
    
    def set_modular(self, modular):
        self.modular = modular
    
    def get_wattage(self):
        return self.wattage
    
    def get_certification(self):
        return self.certification
    
    def is_modular(self):
        return self.modular
    
    def display_info(self):
        super().display_info()
        modular_text = "Modular" if self.modular else "Non-modular"
        print(f" ({self.wattage}W, {self.certification}, {modular_text})", end="")