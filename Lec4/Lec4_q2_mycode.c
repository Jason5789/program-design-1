#include<stdio.h>

int main () {
    double flo1,flo2,flo3,flo4,flo5;
    
    scanf("%lf %lf %lf %lf %lf\n",&flo1,&flo2,&flo3,&flo4,&flo5);
    printf("%.15f",flo1*flo2*flo3*flo4*flo5);
    return 0;
}