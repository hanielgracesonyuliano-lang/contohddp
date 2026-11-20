#include <stdio.h>

int main(){
    //hapus file secara langsung
    if (remove("mahasiswa.txt") == 0) {
        printf("File berhasil dihapus.\n");
    } else {
        printf("Gagal menghapus file.\n");
    }
    return 0;
}
