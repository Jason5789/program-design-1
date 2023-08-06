#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d %d\n",&a,&b);
    int var=a;
    a=b;
    b=var;
    printf("%d %d",a,b);
    return 0;
}