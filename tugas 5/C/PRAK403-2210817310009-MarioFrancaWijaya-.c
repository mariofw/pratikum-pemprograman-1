#include <stdio.h>

int main(void){
    int i,j,satu,dua,x,y;
    scanf("%d %d", &satu, &dua);
    
    if(satu > dua){
        for(i=satu, j=dua; i >= dua, j <=satu; i--, j++){
            printf("%d %d - ", i , j);
        }
    }else{
         for(i=satu, j=dua; i <= dua, j >=satu; i++, j--){
            printf("%d %d - ", i , j);
        }
    }
    return 0;
}