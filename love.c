#include <stdio.h>
#include <math.h>
#include <unistd.h> // Untuk usleep di macOS/Linux

int main() {
    // Bersihkan layar terminal dan sembunyikan kursor
    printf("\033[2J\033[?25l");

    int step = 0;

    while (1) {
        // Pindahkan kursor ke pojok kiri atas (tanpa clear screen ulang agar tidak flickering)
        printf("\033[H");

        // Efek denyut matematika menggunakan fungsi sin
        float pulse = 1.0f + 0.07f * sin(step * 0.25f);

        printf("\033[1;37m   === ANIMASI HATI (C TERMINAL) ===\033[0m\n\n");

        for (float y = 1.3f * pulse; y >= -1.1f * pulse; y -= 0.055f * pulse) {
            printf("       "); // Indentasi agar posisi di tengah terminal
            for (float x = -1.2f * pulse; x <= 1.2f * pulse; x += 0.028f * pulse) {
                float formula = x * x + y * y - 1.0f;
                
                // Persamaan matematika kurva hati
                if (formula * formula * formula - x * x * y * y * y <= 0.0f) {
                    // Gradasi warna RGB (Pink -> Merah Terang -> Merah Tua)
                    if (y > 0.4f) {
                        printf("\033[38;2;255;105;180m#"); // Pink
                    } else if (y > -0.3f) {
                        printf("\033[38;2;255;40;80m#");   // Merah Terang
                    } else {
                        printf("\033[38;2;180;0;50m#");    // Merah Tua
                    }
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }

        printf("\033[0m\n   Tekan \033[1;33mCtrl + C\033[0m untuk menghentikan program.\n");
        fflush(stdout);

        // Delay 40ms (~25 FPS)
        usleep(40000);
        step++;
    }

    // Tampilkan kembali kursor sebelum keluar
    printf("\033[?25h");
    return 0;
}