class Monitor:
    def __init__(self, merk="", model="", ukuran_inch=0.0, resolusi_x=0, resolusi_y=0, refresh_rate=0):
        self.merk = merk
        self.model = model
        self.ukuran_inch = ukuran_inch
        self.resolusi_x = resolusi_x
        self.resolusi_y = resolusi_y
        self.refresh_rate = refresh_rate
    
    def set_merk(self, merk):
        self.merk = merk
    
    def set_model(self, model):
        self.model = model
    
    def set_ukuran_inch(self, ukuran_inch):
        self.ukuran_inch = ukuran_inch
    
    def set_resolusi(self, resolusi_x, resolusi_y):
        self.resolusi_x = resolusi_x
        self.resolusi_y = resolusi_y
    
    def set_refresh_rate(self, refresh_rate):
        self.refresh_rate = refresh_rate
    
    def get_merk(self):
        return self.merk
    
    def get_model(self):
        return self.model
    
    def get_ukuran_inch(self):
        return self.ukuran_inch
    
    def get_resolusi_x(self):
        return self.resolusi_x
    
    def get_resolusi_y(self):
        return self.resolusi_y
    
    def get_refresh_rate(self):
        return self.refresh_rate
    
    def display_info(self):
        print(f"{self.merk} {self.model} {self.ukuran_inch}\" {self.resolusi_x}x{self.resolusi_y} {self.refresh_rate}Hz", end="")