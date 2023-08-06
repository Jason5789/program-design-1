#include <stdio.h>

int main () {
    unsigned int n,n1,n2,n3,n4,answer;
    unsigned int h=0x00000000;
    unsigned int h2=0x00000000;
    unsigned int one=0x00; 
    unsigned int two=0x00;
    unsigned int three=0x00;
    unsigned int four=0x00;
    unsigned int temp=0x00000000;
    unsigned int temp44=0x0000;
    unsigned int temp5=0x0000;
    unsigned int temp6=0x0000;
    unsigned int d1,d2,d3,d4,d;
    unsigned int minus=0xffffff00;
    unsigned int change=0x80000000;

    scanf("%u\n",&n);
    scanf("%u %u %u %u",&d1,&d2,&d3,&d4);
    d=d1+d2+d3+d4;

    n1=n2=n3=n4=n;

    one=n1>>24;
    two=(n2>>16)&0x00FF;
    three=(n3>>8)&0x0000FF;
    four=n4&0x000000FF;

    unsigned int nd[5]={0,one,two,three,four};

    temp|=(nd[d1]^nd[d2])<<24;
    temp|=(nd[d2]&nd[d3])<<16;
    temp|=(nd[d3]|nd[d1])<<8;
    temp44=(~nd[d4])-minus;
    temp|=temp44;

    h2=temp;


    for(int i=0;i<d;i++){
        if(h2&1<<0){
            h2>>=1;
            h2=h2|change;
        }
        else{
            h2>>=1;
        }
    }

    h=h2;
    
    temp5=h>>16;
    temp6=h2&0x0000FFFF; 

    answer=temp5^temp6;

    printf("%d",answer);
    
    return 0;
}