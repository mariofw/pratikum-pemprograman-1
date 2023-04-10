#include <stdio.h>

int main(){
    float pertama, kedua;

    printf("Masukan Nilai pertama\t:");
    scanf("%f", &pertama);
    printf("Masukan Nilai Kedua\t:");
    scanf("%f", &kedua);
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah %.2f", pertama, kedua, pertama +kedua);

    return 0;
}