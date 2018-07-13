#include<stdio.h>

void hello(){
    int a = 2;
    int* pointer = &a;
    printf("%d", *pointer);
    int b = 2;
    int* pointer2 = &b;
    printf("%d", pointer2);
}

int main(){
    hello();
}

