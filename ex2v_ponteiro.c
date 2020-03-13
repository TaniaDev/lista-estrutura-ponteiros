#include <stdio.h>

 int main () {
    int v[10], maior, i;
    int *enMaior, *enV;
    enMaior = &maior;
    enV = v;
    *enMaior = 0;
    printf("Insira 10 números:\n");
    for (i = 0; i < 10; i++){
       scanf("%d",&enV[i]);
         if(enV[i] > *enMaior){
          *enMaior = v[i];
         } 
    }
    printf("Maior = %d\n", *enMaior);
    return 0;
 }