#include<stdio.h>
unsigned long long int NUMBER_1 = 0x38E38E38E38E3800LLU;
unsigned long long int NUMBER_2 = 0x2AAAAAAAAAAAAAAALLU;
unsigned long long int NUMBER_3 = 0x1C71C71C71C71C71LLU;

int main () {
    unsigned long long int x,y,z,a,b,c,d;

    scanf("%llu %llu %llu",&x,&y,&z);
    
    a=(x*NUMBER_1)%0x7CE66C50E2840000LLU;
    b=(y*NUMBER_2)%0x7CE66C50E2840000LLU;
    c=(z*NUMBER_3)%0x7CE66C50E2840000LLU;
    d=(a+b)%0x7CE66C50E2840000LLU;
    
    printf("%llu",(d+c)%0x7CE66C50E2840000LLU);
    return 0;
}