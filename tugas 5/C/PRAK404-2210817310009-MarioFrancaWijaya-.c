#include <stdio.h>

int main(){
    float oper, angka1, angka2, hasil; 
    while(1){
    printf("Pilih Program\n");
    printf("1. penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");
    printf("Masukan Pilihan:");
    scanf("%f", &oper);
    printf("Masukan nilai pertama:");
    scanf("%f", &angka1);
    printf("Masukan nilai kedua:");
    scanf("%f", &angka2);

    if(oper == 1){
        printf("Hasil penjumlahhan antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, hasil = angka1 + angka2,1);
    }else if(oper == 2){
        printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, hasil = angka1 - angka2,1);
    }else if(oper == 3){
        printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2,hasil = angka1 * angka2,1);
    }else if(oper == 4){
        printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", angka1, angka2, hasil = angka1 / angka2,1);
    }else if(oper == 5){
        printf("Terimakasih, telah menggunakan kalkulator Mario Franca Wijaya\n");
        break;
    }else{
        printf("Input anda salah, slahkan coba lagi\n", 1);
    }
    }
    return 0;
}