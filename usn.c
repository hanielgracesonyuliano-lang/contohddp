#include <string.h>
#include <stdio.h>

int main(){
    char username[20];
    char password[20];

    printf("Masukan username: ");
    scanf("%s" , username );

    printf("Masukan password: ");
    scanf("%s" , password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "123") == 0){
        printf("Anda berhasil login");
    }else {
        printf("Hidup anda sisa 5 menit");
    }
    
}
