# FUNGSI
from py_compile import main


def biodata():
    print("\n === INPUT BIODATA ANDA ===")
    nama = input("Masukan Nama Anda: ")
    nim = input("Masukan NIM Anda: ")
    prodi = input("Masukan Prodi Anda: ")
    angkatan = input("Masukan Angkatan Anda: ")

    print(f"\n === BERIKUT BIODATA MAHASISWA {nama}===")
    print(f"Nama: {nama}")
    print(f"NIM: {nim}")
    print(f"Prodi: {prodi}")
    print(f"Angkatan: {angkatan}")

    def luas_segitiga():
        print("\n === HITUNG LUAS SEGITIGA ===")
    try:
        alas = float(input("Masukan Alas Segitiga: "))
        tinggi = float(input("Masukan Tinggi Segitiga: "))
        luas = 0.5 * alas * tinggi
        print(f"Luas Segitiga dengan Alas {alas} dan Tinggi {tinggi} adalah: {luas}")
    except ValueError:
        print("Input tidak valid. Harap masukkan angka.")    

    def kalkulator():
        print("\n === KALKULATOR KALI DAN BAGI ===")
        try:
            angka1 = float(input("Masukan Angka Pertama: "))
            angka2 = float(input("Masukan Angka Kedua: "))

            print("\n PILIH MENU OPERASI:")
            print("1. Perkalian")
            print("2. Pembagian")
            pilihan = input("Masukan Pilihan (1/2): ")

            if pilihan == "1":
                hasil = angka1 * angka2
                print(f"Hasil Perkalian {angka1} * {angka2} = {hasil}")
            elif pilihan == "2":
                if angka2 != 0:
                    hasil = angka1 / angka2
                    print(f"Hasil Pembagian {angka1} / {angka2} = {hasil}")
                else:
                    print("Error: Pembagian dengan nol tidak diperbolehkan.")
        except ValueError:
            print("Input tidak valid. Harap masukkan angka.")

    def main():
        while True:
            print ("\n === SELAMAT DATANG DIPROGRAM UTAMA ===")
            print ("=== SILAJKAN PILIH MENU ===")
            print ("1. Input Dan Cetak Biodata")
            print ("2. Hitung Luas Segitiga")
            print ("3. Kalkulator Kali dan Bagi")
            print ("4. Keluar")

            pilihan = input("Masukan Pilihan (1/2/3/4): ")

            if pilihan == "1":
                biodata()
            elif pilihan == "2":
                luas_segitiga()
            elif pilihan == "3":
                kalkulator()
            elif pilihan == "4":
                print("=== TERIMAKASIH DAN SAMPAI JUMPA")
                break
            else:
                print("\n Pilihan tidak valid. ")
                input("\n Tekan Enter untuk kembali ke menu utama...")
                print("\n === PROGRAM SELESAI ===")
                break

if __name__ == "__main__":
    main()