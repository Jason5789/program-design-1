#include<stdio.h>

int main () {
    float h[6],y[6];
    float enter;
    
    scanf("%f",&enter);
    
    h[0]=0;
    y[0]=enter;
    
    for(int i=0 ; i<5 ; i++){
    	h[i+1]=0.9*y[i]+0.1*h[i]-51.0;
        y[i+1]=-0.98*h[i+1]+153.0;
    }
    
    printf("%.1lf %.1lf %.1lf %.1lf %.1lf",y[1],y[2],y[3],y[4],y[5]);
    
    return 0;
}