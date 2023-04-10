#include <stdio.h>

int Biodata(int tahunLahir, char A[20], char B[15]){
    printf("Perkenalkan Nama Saya : %s\n", A);
    printf("Umur Saya : %d\n", 2020 - tahunLahir);
    printf("Saya Adalah Angkatan : 2020\n");
    printf("Asal Saya Dari : %s", B);
}
int main() {
int tahunLahir;
char A[20], B[15];
scanf(" %d",&tahunLahir); 
scanf(" %[^\n]%*c",&A);
scanf(" %[^\n]%*c",&B); 
Biodata(tahunLahir, A, B); 
return 0;
}