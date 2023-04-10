#include <stdio.h>

int main(){
    int angka;

    printf("Masukan angka 0-99 untuk di eja:");
    scanf("%d", &angka);

    if(angka == 0){
        printf("Nol");
    } else if(angka >= 1 && angka <= 9){
        printf("Satuan");
    } else if(angka >= 10 && angka <= 19){
        printf("Belasan");
    } else if(angka >= 20 && angka <= 99){
        printf("Puluhan");
    } else {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }

    return 0;
}