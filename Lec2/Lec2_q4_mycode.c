#include<stdio.h>

int main () {
    float x,y;
    scanf("%f %f",&x,&y);

    printf("%f", y/((x/100)*(x/100)) );
    return 0;
}