#include <stdio.h>

int main(){
    int pasukanYuZhong = 958730;
    int pahlawan = 5;
    int musuhBagiRata = pasukanYuZhong / pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukanYuZhong);
    printf("Jumlah pahlawan = %d\n", pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan",musuhBagiRata);

    return 0;
}