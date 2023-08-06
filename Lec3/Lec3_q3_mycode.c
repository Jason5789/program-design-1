#include<stdio.h>

int main () {
    int max;
	int min;
    int num;
    
    scanf("%d",&num);
    max=num;
    min=num;
    
    while(num!=-1){    
        if(max<num){
            max=num;
        }
        if(min>num){
            min=num;
        }
    	scanf("%d",&num);
    }
    
    printf("%d",max-min);
    
    return 0;
}