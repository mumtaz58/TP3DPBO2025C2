from Komponen import Komponen

class Motherboard(Komponen):
    def __init__(self, chipset="", socket_type="", max_ram_slots=0, form_factor="", merk="", nama=""):
        super().__init__(merk, nama)
        self.chipset = chipset
        self.socket_type = socket_type
        self.max_ram_slots = max_ram_slots
        self.form_factor = form_factor
    
    def set_chipset(self, chipset):
        self.chipset = chipset
    
    def set_socket_type(self, socket_type):
        self.socket_type = socket_type
    
    def set_max_ram_slots(self, max_ram_slots):
        self.max_ram_slots = max_ram_slots
    
    def set_form_factor(self, form_factor):
        self.form_factor = form_factor
    
    def get_chipset(self):
        return self.chipset
    
    def get_socket_type(self):
        return self.socket_type
    
    def get_max_ram_slots(self):
        return self.max_ram_slots
    
    def get_form_factor(self):
        return self.form_factor
    
    def display_info(self):
        super().display_info()
        print(f" (Chipset: {self.chipset}, Socket: {self.socket_type}, {self.max_ram_slots} RAM Slots, {self.form_factor})", end="")