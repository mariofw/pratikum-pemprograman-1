#include <stdio.h>

int main(){
    char nama[50], nim[40], kelas[50], tempat[50], alamat[50], hobby[40], hp[35];
    
    printf("INPUT\n");
    printf("Nama lengkap\t\t:");
    gets(nama);
    printf("NIM\t\t\t:");
    gets(nim);
    printf("Kelas Paralel\t\t:");
    gets(kelas);
    printf("Tempat/Tanggal Lahir\t:");
    gets(tempat);
    printf("Alamat\t\t\t:");
    gets(alamat);
    printf("Hobby\t\t\t:");
    gets(hobby);
    printf("No. HP\t\t\t:");
    gets(hp);

    printf("OUTPUT\n");
    printf("Nama Lengkap\t\t:%s\n", nama);
    printf("NIM\t\t\t:%s\n", nim);
    printf("Kelas Paralel\t\t:%s\n",kelas);
    printf("Tempat Tanggal Lahir\t:%s\n", tempat);
    printf("Alamat\t\t\t:%s\n", alamat);
    printf("Hobby\t\t\t:%s\n", hobby);
    printf("No. HP\t\t\t:%s\n", hp);

    return 0;
}