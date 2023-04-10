#include <stdio.h>

int main(){
    int panjangSisi1 = 4;
    int panjangSisi2 = 5;
    int panjangSisi3 = 7;
    int hargaTanahPerMeter = 85000;
    int keliling = panjangSisi1 + panjangSisi2 + panjangSisi3;
    int hargaSeluruhTanah = keliling * hargaTanahPerMeter;

    printf("Panjang sisi segiti berturut-turut adalah %d, %d, dan %d\n", panjangSisi1,panjangSisi2,panjangSisi3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", hargaTanahPerMeter);
    printf("Jawaban:\n");
    printf("Biaya yang di perlukan Pak Dengklek adalah :Rp %d", hargaSeluruhTanah);

    return 0;
}