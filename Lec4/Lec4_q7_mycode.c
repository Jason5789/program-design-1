#include<stdio.h>

int main () {
	long int x;
    int a,b,c,d;
    scanf("%lx",&x);
    a=x/16777216;
    b=((x/65536)%256);
    c=((x/256)%256);
    d=x%256;
    
    if(a<0){
        a=255+a;
    }
    if(b<0){
        b=255+b;
    }
    if(c<0){
        c=255+c;
    }
    if(d<0){
        d=256+d;
    }
    
    printf("%d.%d.%d.%d",a,b,c,d);
    
    return 0;
}