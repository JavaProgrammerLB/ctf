#include<stdio.h>

void true_or_false(int a){
    if(a){
 	printf("%d is true", a);
    }else{
	printf("%d is false", a);
    }
}

int main(){
    int a = 1;
    int b = 0;
    int c = -1;
    true_or_false(a);
    true_or_false(b);
    true_or_false(c);
}
