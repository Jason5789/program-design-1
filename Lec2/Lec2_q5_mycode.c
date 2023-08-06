#include <stdio.h>

int main(void){
    long ean;
    int a,b,x,y,z;
    
    scanf("%ld",&ean);
    
   	a=ean%10+ean/100%10+ean/10000%10+ean/1000000%10+ean/100000000%10+ean/10000000000%10;   
  	b=ean/10%10+ean/1000%10+ean/100000%10+ean/10000000%10+ean/1000000000%10+ean/100000000000%10;
    
    x=a*3+b;
    y=--x;
    z=y%10;
    z=9-z;
    
    printf("%d",z);
    
    return 0;
}