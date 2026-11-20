// #include <stdio.h>

// void bintang() {
//     printf("*******\n");
// }


// void bintangspasi() {
//     printf("*******\n");
// }

// void buatkotak() {
//     bintang();
//     bintangspasi();
//     bintangspasi();
//     bintangspasi();
//     bintang();
// }



// void main() {
   
//     buatkotak();
    
// }

// int main() {
//     printf("*******\n");
//     printf("*     *\n");
//     printf("*     *\n");
//     printf("*     *\n");
//     printf("*******\n");
//         return 0;
// }



// void main (void);
// {
//     char huruf;  
//     huruf = '*';
//     printf("%c", huruf);

//     printf("\n");
// }

// #include <stdio.h>

// void main () {
//     char huruf, spasi;
//     spasi = ' ';
//     printf("Masukkan huruf : ");
//     scanf("%c", &huruf);

//     printf("%c", huruf); printf("%c", huruf); printf("%c", huruf); printf("%c", huruf); printf("%c", huruf); printf("%c", huruf); printf("%c", huruf);
//     printf("%c", huruf); printf("%c", spasi); printf("%c", spasi); printf("%c", spasi); printf("%c", spasi); printf("%c", spasi); printf("%c", huruf);
//     printf("%c", huruf); printf("%c", spasi); printf("%c", spasi); printf("%c", spasi); printf("%c", spasi); printf("%c", spasi); printf("%c", huruf);
//     printf("%c", huruf); printf("%c", spasi); printf("%c", spasi); printf("%c", spasi); printf("%c", spasi); printf("%c", spasi); printf("%c", huruf);
//     printf("%c", huruf); printf("%c", huruf); printf("%c", huruf); printf("%c", huruf); printf("%c", huruf); printf("%c", huruf); printf("%c", huruf);
   
// }

// #include <stdio.h>

// int main () {
//     char huruf, spasi;
//     int i, j, P;
//     spasi = ' ';
//     printf("Masukan suatu karakter: "); 
//     scanf("%c", &huruf);
//     printf("Masukan banyak karakter: ");
//      scanf("%d", &P);
//     for (i = 1; i <= P; i++) {
//         for (j = 1; j <= i; j++) {
//                 printf("%c", huruf);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main () {
//     char huruf, spasi;
//     int i, j, P;
//     spasi = ' ';
//     printf("Masukan suatu karakter: "); 
//     scanf("%c", &huruf);
//     printf("Masukan banyak karakter: ");
//      scanf("%d", &P);
//     for (i = 1; i <= P; i++) {
//         for (j = 1; j <= (P - i); j++) {
//             printf("%c", spasi);
//         }
//         for (j = 1; j <= i; j++) {
//                 printf("%c", huruf);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main () {
//     char huruf, spasi;
//     int i, j, P;
//     spasi = ' ';
//     printf("Masukan suatu karakter: "); 
//     scanf("%c", &huruf);
//     printf("Masukan banyak karakter: ");
//      scanf("%d", &P);
//     for (i = 1; i <= P; i++) {
//         for (j = 1; j<=P - i; j++) {
//             printf(" ");
//         }
//         for (j = 1; j <= i; j++) {
//                 printf("%c", huruf);
//         }
//         printf("\n");
//     }
//     return 0;
// }

Berikut ringkasan **paling singkat & padat** untuk jawaban latihan soal dari file PDF:

---

### **Materi 1–3: Dasar & Operator**

* **Pemrograman:** Menulis instruksi logis untuk komputer via kode/algoritma.


* **Simbol Lingkaran Flowchart:** Connector (penghubung alur di halaman yang sama).


* **Variabel & Deklarasi:** Wadah memori penyimpan data. Contoh: `int umur = 18;`


* **Sequence:** Eksekusi kode secara berurutan dari atas ke bawah.


* **Tipe Data:** `int` (bulat), `float`/`double` (desimal), `char` (karakter).


* **Anatomi C:** `#include <stdio.h>` (library), `int main()` (fungsi utama), `{}` (blok kode), `return 0;` (selesai).


* **Nama Variabel:** Valid (`nilai_1`), Tidak Valid (`1nilai`, `nama depan`, `int`).


* **I/O:** `printf()` untuk output, `scanf()` untuk input (pakai `&`).


* **Operator:**
* **Aritmatika:** `+`, `-`, `*`, `/`, `%` (sisa bagi), `++` (tambah 1), `--` (kurang 1).


* **Perbandingan:** `==`, `!=`, `>`, `<`, `>=`, `<=`.


* **Penugasan:** `=`, `+=`, `-=`, `*=`, `/=`, `%=`.


* **Logika:** `&&` (AND / keduanya benar), `||` (OR / salah satu benar), `!` (NOT / membalik nilai).





---

### **Materi 4–5: Percabangan & Perulangan**

* **Percabangan:**
* `if-else`: 2 pilihan jalur (True/False).


* `if-else-if`: Lebih dari 2 pilihan/rentang nilai (misal: Grade A/B/C).


* `switch-case`: Pilih nilai pasti (`int`/`char`), cocok untuk menu. Ada `switch` (evaluasi), `case` (pilihan), dan `default` (cadangan).




* **Perulangan (Looping):**
* Komponen: Inisialisasi, Kondisi, Update.


* `for`: Iterasi pasti (Cek di awal).


* `while`: Iterasi tak pasti, bisa 0 kali (Cek di awal).


* `do-while`: Minimal jalan 1 kali (Cek di akhir).





---

### **Inti Kode Soal Latihan (Materi 5–10)**

1. **Output Teks:** `printf("Halo, nama saya...");`

2. **Input Teks:** `scanf("%[^\n]s", nama);`

3. **Input Data (Nama, Umur, NIM):** Pakai `scanf("%s", nama); scanf("%d", &umur); scanf("%s", nim);`

4. **Kalkulator:** `a+b`, `a-b`, `a*b`, dan `(float)a/b`.


5. **Operator Penugasan:** `angka += 5;`

6. **Grade Nilai:** `if (n>=85)` $\rightarrow$ A, `else if (n>=75)` $\rightarrow$ B, `else if (n>=60)` $\rightarrow$ C, `else` $\rightarrow$ D.


7. **Menu Minuman:** `switch(pilihan)` dengan `case 1` sampai `case 4`.


8. **Loop 1-100:** `for (int i=1; i<=100; i++) printf("%d ", i);`

9. **Loop 1-5:** `int i=1; while (i<=5) { printf("%d ", i); i++; }`

10. **Input Sampai 0:** `do { scanf("%d", &n); } while (n != 0);`

  #include <stdio.h>

int main () {
    char huruf, spasi;
    int i, j, P;
    spasi = ' ';
    printf("Masukan suatu karakter: "); 
    scanf("%c", &huruf);
    printf("Masukan banyak karakter: ");
     scanf("%d", &P);
     for (i = 1; i <= P; i++) {
        for (j=1; j <= P; j++) {
        printf("%c", huruf);
        }
        printf("%i", i);
        printf("\n");
        }
        return 0;
     } 