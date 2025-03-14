from Komponen import Komponen

class Casing(Komponen):
    def __init__(self, form_factor="", max_fans=0, rgb_support=False, material="", merk="", nama=""):
        super().__init__(merk, nama)
        self.form_factor = form_factor
        self.max_fans = max_fans
        self.rgb_support = rgb_support
        self.material = material
    
    def set_form_factor(self, form_factor):
        self.form_factor = form_factor
    
    def set_max_fans(self, max_fans):
        self.max_fans = max_fans
    
    def set_rgb_support(self, rgb_support):
        self.rgb_support = rgb_support
    
    def set_material(self, material):
        self.material = material
    
    def get_form_factor(self):
        return self.form_factor
    
    def get_max_fans(self):
        return self.max_fans
    
    def has_rgb_support(self):
        return self.rgb_support
    
    def get_material(self):
        return self.material
    
    def display_info(self):
        super().display_info()
        rgb_text = "RGB Support" if self.rgb_support else "No RGB"
        print(f" ({self.form_factor}, {self.max_fans} Fans, {rgb_text}, {self.material})", end="")