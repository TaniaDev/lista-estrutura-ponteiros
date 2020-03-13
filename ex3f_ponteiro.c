#include <stdio.h>

int acha_maior (int *a, int *b){
    if(*a > *b)
        return *a;
    else
        return *b;
}

int main () {
    int x, y;
    int *a, *b;
    a = &x;
    b = &y;      
    scanf("%d", &x); 
    scanf("%d", &y);
    int r = acha_maior(a, b);
    printf("Maior: %d\n", r);
    return 0;
}