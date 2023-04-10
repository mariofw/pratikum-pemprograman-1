#include <stdio.h>

int main(){
    int bil;
    
    printf("Masukan nilai kamu :");
    scanf("%d", &bil);

    if(bil >= 80){
        printf("Nilai kamu setelah di konversi adalah A");
    } else if (bil >= 70 && bil <= 79){
        printf("Nilai kamu setelah di koversi adalah B");
    } else if (bil >= 60 && bil <= 69){
        printf("Nilai kamu setelah di koversi adalah C");
    } else if (bil >= 50 && bil <= 59){
        printf("Nilai kamu setelah di koversi adalah D");
    } else {
        printf("Nilai kamu setelah di konversi adalah E");
    }

    return 0;
}