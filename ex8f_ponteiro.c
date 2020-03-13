#include<stdio.h>

int calculaPrimo(int *num){
	int i, aux=1;
    for(i = 2; i <= *num; i++){
        if (*num % i == 0){
            aux++;
        }
    }
    return aux;
}

int main(){
    int num;
    int *enNum;
    enNum = &num;
    scanf("%d",&num);
    if (calculaPrimo(enNum) == 2)
        printf("%d = primo\n", *enNum);
	  else
        printf("%d = nao primo\n", *enNum);	 
	
    return 0;
}