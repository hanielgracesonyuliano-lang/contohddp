def biodata():
    print("\n=== INPUT BIODATA ANDA ===")
    nama = input("Masukkan Nama Anda: ")
    nim = input("Masukkan NIM Anda: ")
    prodi = input("Masukkan Prodi Anda: ")
    angkatan = input("Masukkan Angkatan Anda: ")

    print(f"\n=== BERIKUT BIODATA MAHASISWA {nama} ===")
    print(f"Nama     : {nama}")
    print(f"NIM      : {nim}")
    print(f"Prodi    : {prodi}")
    print(f"Angkatan : {angkatan}")


def luas_segitiga():
    print("\n=== HITUNG LUAS SEGITIGA ===")
    try:
        alas = float(input("Masukkan Alas Segitiga: "))
        tinggi = float(input("Masukkan Tinggi Segitiga: "))
        luas = 0.5 * alas * tinggi
        print(
            f"Luas Segitiga dengan Alas {alas} dan Tinggi {tinggi} adalah: {luas}"
        )
    except ValueError:
        print("Input tidak valid. Harap masukkan angka.")


def kalkulator():
    print("\n=== KALKULATOR KALI DAN BAGI ===")
    try:
        angka1 = float(input("Masukkan Angka Pertama: "))
        angka2 = float(input("Masukkan Angka Kedua: "))

        print("\nPILIH MENU OPERASI:")
        print("1. Perkalian")
        print("2. Pembagian")
        pilihan = input("Masukkan Pilihan (1/2): ")

        if pilihan == "1":
            hasil = angka1 * angka2
            print(f"Hasil Perkalian {angka1} * {angka2} = {hasil}")
        elif pilihan == "2":
            if angka2 != 0:
                hasil = angka1 / angka2
                print(f"Hasil Pembagian {angka1} / {angka2} = {hasil}")
            else:
                print("Error: Pembagian dengan nol tidak diperbolehkan.")
        else:
            print("Pilihan operasi tidak valid.")
    except ValueError:
        print("Input tidak valid. Harap masukkan angka.")


def main():
    while True:
        print("\n=== SELAMAT DATANG DI PROGRAM UTAMA ===")
        print("=== SILAKAN PILIH MENU ===")
        print("1. Input Dan Cetak Biodata")
        print("2. Hitung Luas Segitiga")
        print("3. Kalkulator Kali dan Bagi")
        print("4. Keluar")

        pilihan = input("Masukkan Pilihan (1/2/3/4): ")

        if pilihan == "1":
            biodata()
        elif pilihan == "2":
            luas_segitiga()
        elif pilihan == "3":
            kalkulator()
        elif pilihan == "4":
            print("\n=== TERIMA KASIH DAN SAMPAI JUMPA ===")
            break
        else:
            print("\nPilihan tidak valid.")

        input("\n Apakah Anda ingin kembali ke menu utama? (y/n): ")


if __name__ == "__main__":
    main()