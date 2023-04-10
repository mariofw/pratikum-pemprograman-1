#include <stdio.h>

int main(){
    int angka, hari, jam, menit, detik, sisa, sisa1;

    printf("Masukan angka yang akan di konversi ke jam, menit, detik:");
    scanf("%d", &angka);

    hari = angka / 86400;
    sisa = angka % 86400;
    jam = sisa / 3600;
    sisa1 = angka % 3600;
    menit = sisa1 / 60;
    detik = angka % 60;

    if(angka >= 86400){
            printf("%d hari %d:%d:%d", hari, jam, menit, detik);
    } else if(angka >= 3600 && angka <= 86399){
            printf("%d:%d:%d", jam, menit, detik);
    } else if(angka >= 60 && angka <= 3599){
        printf("00:%d:%d", menit, detik);
    } else{
        printf("00:00:%d", detik);
    }
    return 0;
}