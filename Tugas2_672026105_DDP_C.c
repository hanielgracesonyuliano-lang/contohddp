#include <stdio.h>

// Variabel global untuk menyimpan data transaksi
int pilihan, jumlah;
int totalHarga = 0;

// 1. Procedure untuk menampilkan daftar menu
void tampilkanMenu() {
    printf("===================================\n");
    printf("         MENU KANTIN FTI           \n");
    printf("===================================\n");
    printf("1. Nasi Goreng  - Rp 15.000\n");
    printf("2. Mie Ayam     - Rp 12.000\n");
    printf("3. Es Teh Manis - Rp  3.000\n");
    printf("===================================\n");
}

// 2. Function untuk menghitung total harga pembelian
int hitungTotal() {
    int harga = 0;
    
    if (pilihan == 1) {
        harga = 15000;
    } else if (pilihan == 2) {
        harga = 12000;
    } else if (pilihan == 3) {
        harga = 3000;
    } else {
        printf("Pilihan menu tidak valid!\n");
        return 0;
    }
    
    return harga * jumlah; // Mengembalikan nilai total harga
}

// 3. Procedure untuk menampilkan struk pembelian
void tampilkanStruk() {
    printf("\n===================================\n");
    printf("          STRUK PEMBELIAN          \n");
    printf("===================================\n");
    printf(" Pilihan Menu : %d\n", pilihan);
    printf(" Jumlah Beli  : %d Porsi/Gelas\n", jumlah);
    printf(" Total Bayar  : Rp %d\n", totalHarga);
    printf("===================================\n");
    printf(" Terima kasih telah berbelanja!    \n");
    printf("===================================\n");
}

int main() {
    // Memanggil procedure tampilkan Menu
    tampilkanMenu();

    // 4. Input menggunakan scanf() untuk menerima pilihan dan jumlah
    printf("Pilih nomor menu (1-3): ");
    scanf("%d", &pilihan);

    printf("Masukkan jumlah pembelian: ");
    scanf("%d", &jumlah);

    // Memanggil function hitung Total dan menyimpan hasilnya
    totalHarga = hitungTotal();

    // Memanggil procedure tampilkan Struk
    tampilkanStruk();

    return 0;
}