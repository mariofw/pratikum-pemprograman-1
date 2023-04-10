#include <stdio.h>

int main(){
    float putaran = 5;
    float telahBerlari = 14;
    float phi = 3.14;
    float putaran1 = telahBerlari / putaran;
    float jari = putaran1 / (2 * phi);

    printf("Pak Dengklek mengelilingi taman = %.0f putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", telahBerlari);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang di kelilingi Pak Dengklek adalah %.2f Kilometer", jari);


    return 0;
}