#include<stdio.h>
#include<string.h>

int main(){
    int a = strcmp("a", "b");
    int b = strcmp("a", "a");
    int c = strcmp("b", "a");
    printf("a before b is %d, a before a is %d, b before a is %d", a, b, c);
    return 0;
}
