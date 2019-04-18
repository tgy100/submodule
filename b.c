#include<stdio.h>

int main(){

    int a = 10, b = 20, tmp;

    tmp = a;
    a = b;
    b = tmp; 
    printf("%d,%d",a,b);
    return 0;
}
