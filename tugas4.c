import math

def hitung_hipotenusa(a, b):
    if a <= 0 or b <= 0:
        raise ValueError("Panjang sisi harus lebih besar dari 0.")
    return math.hypot(a, b)  

sisi_a = float(input("Masukkan panjang sisi pertama (a): "))
sisi_b = float(input("Masukkan panjang sisi kedua (b): "))

hipotenusa = hitung_hipotenusa(sisi_a, sisi_b)
print(f"Panjang hipotenusa (sisi miring) adalah: {hipotenusa:.2f}")