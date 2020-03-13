#include<stdio.h>

int calculaFatorial(int num){
	if(num == 0 || num == 1)
		return 1;
	return num * calculaFatorial(num-1);
}

int main(){
	int fat;
    int *enFat;
    enFat = &fat;
    scanf("%d",&fat);
	printf("Fatorial de %d = %d\n",*enFat,calculaFatorial(*enFat));	 
	 return 0;
}