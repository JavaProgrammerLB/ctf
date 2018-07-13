#include<stdio.h>

void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;     
}

int main(){
    int a = 5;
    int b = 10;
    swap(&a, &b);
    printf("%d", a);
    printf("%d", b);
}

