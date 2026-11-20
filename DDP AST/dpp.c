#include <stdio.h>

int main(){
    //soal 1
    // printf("Halo, nama saya Ruben");

    //soal 2
    // char nama[10];
    // int nim;
    // int umur;

    //soal 4
    // int bilangan1;
    // int bilangan2;
    // int penjumlahan;
    // int pengurangan;
    // int perkalian;
    // int pembagian;

    //soal 5
    // int angka=10;
    // angka += 5;
    // printf("Hasil: %d\n", angka);

    //soal 6    
    // int nilai;

    // printf("Masukkan nilai anda: ");
    // scanf(" %d", &nilai);

    // if (nilai >=85){
    //     printf("Nilai anda adalah A");
    // }else if(nilai >=75){
    //     printf("Nilai anda adalah B");
    // }else if(nilai >=60){
    //     printf("Nilai anda adalah C");
    // }else if(nilai <60){

    // }else {
    //     printf("Masukkan nilai dengan benar");
    // }

    // int pilihan;
    // printf("1. Air Putih\n");
    // printf("2. Teh\n");
    // printf("3. Kopi\n");
    // printf("4. Susu\n");

    // printf("Masukkan pilihan: ");
    // scanf(" %d", &pilihan);
    
    //soal 7
    // switch (pilihan){
    //     case 1:
    //     printf("Anda memilih air putih");
    //     break;
    //     case 2:
    //     printf("Anda memilih Teh");
    //     break;
    //     case 3:
    //     printf("Anda memilih Kopi");
    //     break;
    //     case 4:
    //     printf("Anda memilih Susu");    
    //     break;
    //     default:
    //     printf("Pilihan tidak valid");
    // }

    //soal 8
    // for (int i = 1; i<=100; i++){
    //     printf( " %d\n", i);
    // }

    //soal 9
    // int i = 1;
    // while(i <=5 ){
    //     printf(" %d\n", i);
    //     i++;
    // }

    //soal 10
    int angka;
    do {
        printf("Masukkan angka 0 untuk berhenti: ");
        scanf(" %d", &angka);
    } while( angka !=0);

        printf("Program Berhenti");
    

    //soal 4
    // printf("Masukkan nama: ");
    // scanf(" %s", &nama);
    // printf("Masukkan NIM: ");
    // scanf(" %d", &nim);
    // printf("Masukkan umur: ");
    // scanf(" %d", &umur);

    //soal 4
    // printf("Masukkan bilangan pertama: ");
    // scanf(" %d", &bilangan1);
    // printf("Masukkan bilangan kedua: ");
    // scanf(" %d", &bilangan2);
    
    //soal 4
    // penjumlahan = bilangan1 + bilangan2;
    // pengurangan = bilangan1 - bilangan2;
    // perkalian = bilangan1*bilangan2;
    // // pembagian = bilangan1/bilangan2;

    // //soal 4
    // printf("Hasil penjumlahan: %d\n", penjumlahan);
    // printf("Hasil pengurangan: %d\n", pengurangan);
    // printf("Hasil perkalian:  %d\n", perkalian);
    // printf("Hasil pembagian:  %d\n", pembagian);

    // //soal 3
    // // printf("Nama: %s\n", nama);
    // // printf("NIM: %d\n", nim);
    // // printf("Umur %d\n", umur);

    return 0;
}

//Materi
// Menurut Anda, apa itu pemrograman?
// Pemrograman adalah proses menulis instruksi/kode untuk komputer menggunakan algoritma dan bahasa pemrograman tertentu agar komputer dapat menjalankan tugas yang diinginkan.

// Dalam flowchart, ikon ini melambangkan...
// Ikon lingkaran tersebut melambangkan Connector (Penghubung), yaitu simbol yang digunakan untuk menghubungkan alur dalam halaman yang sama pada sebuah flowchart. 

// Apa itu Variabel?
// Variabel adalah wadah/tempat di dalam memori komputer yang digunakan untuk menyimpan suatu nilai atau data. 

// Berikan contoh cara mendeklarasikan Variabel
// Contoh deklarasi variabel dalam bahasa C: int umur; atau int nilai = 80; 

// Apa itu Sequence?
// Sequence (Runtunan) adalah struktur logika dasar di mana instruksi/kode dijalankan secara berurutan baris demi baris dari atas ke bawah. 

//  Apa saja jenis tipe data dalam Bahasa C?
// Tipe data dasar dalam Bahasa C meliputi: 
// •	int: Bilangan bulat (misal: 25, -10) 
// •	float: Bilangan desimal presisi tunggal (misal: 3.14) 
// •	double: Bilangan desimal presisi ganda (misal: 3.14159265) 
// •	char: Karakter tunggal (misal: 'A', '?') 

// Materi 2
// 	Anatomi Dasar Program C
// 	Library (#include <stdio.h>): Mengimpor fungsi standar input/output. 
// 	Fungsi Utama (int main()): Titik awal eksekusi program. 
// 	Blok Kode ({ ... }): Berisi baris instruksi/statement. 
// 	Return Value (return 0;): Sinyal bahwa program telah selesai dieksekusi tanpa error. 

// 	Contoh Nama Variabel Valid & Tidak Valid
// 	Valid: nama_depan, nilai1, _saldo
// 	Tidak Valid: 1nilai (diawali angka), nama depan (menggunakan spasi), int (menggunakan keyword bawaan C) 

// 	Cara Mencetak Output
// 	Menggunakan fungsi printf() dengan placeholder/format specifier yang sesuai dengan tipe datanya. 
// 	Contoh: printf("Umur saya %d tahun\n", umur);

// 	Pengertian scanf
// 	scanf() adalah fungsi untuk membaca input data dari keyboard dan menyimpannya ke memori variabel menggunakan operator alamat (&). 
// 	Arti dari x++ dan x--
// 	x++: Menambah nilai x sebanyak 1 (x=x+1). 
// 	x--: Mengurangi nilai x sebanyak 1 (x=x-1). 

// Materi 3
// 	Jenis-jenis Operator
// 	Operator Aritmatika 
// 	Operator Perbandingan 
// 	Operator Penugasan 

// 	Operator Logika 
// 	Isi Operator Aritmatika
// 	Penjumlahan (+) 
// 	Pengurangan (-) 
// 	Perkalian (*) 
// 	Pembagian (/) 
// 	Modulo / Sisa Bagi (%) 
// 	Increment (++) & Decrement (--) 

// 	Isi Operator Perbandingan
// 	Sama dengan (==) 
// 	Tidak sama dengan (!=) 
// 	Lebih besar dari (>) 
// 	Lebih kecil dari (<) 
// 	Lebih besar atau sama dengan (>=) 
// 	Lebih kecil atau sama dengan (<=) 

// 	Isi Operator Penugasan
// 	Penugasan dasar (=) 
// 	Tambah dan tugaskan (+=) 
// 	Kurang dan tugaskan (-=) 
// 	Kali dan tugaskan (*=) 
// 	Bagi dan tugaskan (/=) 
// 	Modulo dan tugaskan (%=) 

// 	Isi Operator Logika
// 	&& (AND): Bernilai 1 (benar) hanya jika kedua kondisi benar. 
// 	|| (OR): Bernilai 1 (benar) jika salah satu atau kedua kondisi benar. 
// 	! (NOT): Membalik nilai logika (benar menjadi salah, dan sebaliknya). 

// Materi 4
// 	Pengertian Percabangan if-else
// 	Struktur percabangan dua jalur di mana jalur if dieksekusi jika kondisi bernilai BENAR (True), dan jalur else dieksekusi sebagai alternatif jika kondisi SALAH (False). 

// 	Contoh Analogi if-else
// 	Kondisi: Apakah di luar hujan? 
// 	Jika True (if): Bawa payung. 
// 	Jika False (else): Jalan terus tanpa payung. 

// 	Penggunaan if-else
// 	Digunakan saat memiliki 2 pilihan alternatif atau menentukan keputusan 2 jalur (misalnya lulus/gagal, ya/tidak). 

// 	Penggunaan if-else-if
// 	Digunakan saat terdapat lebih dari dua pilihan yang saling eksklusif untuk menentukan klasifikasi atau rentang nilai (misalnya klasifikasi Grade A, B, C, atau D). 

// Materi 5 – Switch Case
// 	Pengertian & Penggunaan switch-case
// 	Pengertian: Struktur percabangan untuk memilih satu dari banyak pilihan berdasarkan nilai sebuah ekspresi. 
// 	Penggunaan: Digunakan ketika membandingkan satu nilai bertipe integer atau char dengan banyak pilihan konstanta. 

// 	Perbedaan switch-case dengan if-else
// 	switch-case: Cocok untuk membandingkan satu nilai pasti bertipe integer/char dengan beberapa konstanta secara rapi. 
// 	if-else: Cocok untuk kondisi yang berupa rentang nilai, tipe data desimal (float), string, atau ekspresi logika kompleks. 

// 	Pengertian switch, case, dan default
// 	switch: Kata kunci untuk mengevaluasi variabel/ekspresi. 
// 	case: Label pilihan nilai konstanta yang akan dicocokkan dengan ekspresi. 
// 	default: Jalur alternatif opsional yang akan dijalankan jika tidak ada nilai case yang cocok. 

// Materi 5 – Perulangan (Looping)
// 	Penggunaan Perulangan
// 	Perulangan digunakan saat perlu mengulang instruksi yang sama berkali-kali agar penulisan kode lebih ringkas, efisien, dan meminimalkan kesalahan ketik. 

// 	Bagian Utama Perulangan
// 	Inisialisasi: Nilai awal variabel penghitung. 
// 	Kondisi: Syarat yang diperiksa; perulangan berjalan selama kondisi bernilai benar. 
// 	Update: Perubahan nilai variabel penghitung di setiap putaran. 

// 	Perbedaan for, while, dan do-while beserta Analogi
// 	for: Cek kondisi di awal; digunakan saat jumlah ulangan sudah pasti diketahui. 
// 	Analogi: Berlari mengelilingi lapangan sebanyak 5 putaran secara pasti.
// 	while: Cek kondisi di awal; digunakan saat jumlah ulangan tidak pasti dan bisa berjalan 0 kali jika kondisi awal salah. 
// 	Analogi: Berjalan terus selama lampu lalulintas masih hijau (jika dari awal merah, langsung tidak berjalan).
// 	do-while: Eksekusi blok dulu baru cek kondisi di akhir; instruksi pasti berjalan minimal 1 kali. 
// 	Analogi: Menampilkan menu program terlebih dahulu, baru menanyakan apakah ingin mengulang/keluar



int main(){

    int nim;
    char kodeKelas;
    int kodeSoal;
    float r, luas, keliling;
    


    printf("Masukkan NIM anda: ");
    scanf("%d", &nim);

    printf("Masukkan kode kelas DDP Anda : ");
    scanf(" %c", &kodeKelas);

    kodeSoal = 1 - (nim % 2);

    printf("=== DATA DIRI ===\n");

    printf("NIM: %d\n", nim);
    printf("Kode Kelas DDP : %c\n", kodeKelas);
    printf("Kode soal anda: %d\n", kodeSoal);
    printf("===================\n");

    printf("=====Bangun datar=====\n");
    printf("Masukkan jari-jari lingkaran :");
    scanf("%f", &r);

    luas = 3.14 * r * r;
    keliling = 2 * 3.14 * r;

    printf("=======Bangun Datar======\n");
    printf("Luas Lingkaran:%.2f cm2\n", luas);
    printf("Keliling Lingkaran:%.2f cm\n", keliling);
    printf("==========================\n");

    return 0;
}

