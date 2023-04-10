#include <stdio.h>

int main(){
    int i, n=50, angka, simbol;
    scanf("%d %c", &angka, &simbol);
    
    for(i=1;i<=n;i++){
        if(i%angka==0){
            printf("%c ", simbol);
        }else{
            printf("%d ",i);
        }
    }
    return 0;
}