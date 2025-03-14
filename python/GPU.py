from Komponen import Komponen

class GPU(Komponen):
    def __init__(self, vram=0, tipe_gpu="", clock_speed_ghz=0.0, merk="", nama=""):
        super().__init__(merk, nama)
        self.vram = vram
        self.tipe_gpu = tipe_gpu
        self.clock_speed_ghz = clock_speed_ghz
    
    def set_vram(self, vram):
        self.vram = vram
    
    def set_tipe_gpu(self, tipe_gpu):
        self.tipe_gpu = tipe_gpu
    
    def set_clock_speed_ghz(self, clock_speed_ghz):
        self.clock_speed_ghz = clock_speed_ghz
    
    def get_vram(self):
        return self.vram
    
    def get_tipe_gpu(self):
        return self.tipe_gpu
    
    def get_clock_speed_ghz(self):
        return self.clock_speed_ghz
    
    def display_info(self):
        super().display_info()
        print(f" ({self.vram} GB VRAM) {self.tipe_gpu} ~{self.clock_speed_ghz}GHz", end="")