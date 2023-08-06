#include<stdio.h>

int main () {
    int a,b;
    scanf("%d %d",&a,&b);
    
    if (a==1){
        for(int i=b ; i>0 ; i--){
            for(int j=0 ; j<i ; j++){
                printf("*");
            }
            printf("\n");
        }
    }
    else if (a==2){
        for(int i=0 ; i<b ; i++){
            for(int j=0 ; j<i+1 ; j++){
                printf("*");
            }
            printf("\n");
        }
    }
    else if (a==3){
        for(int i=b ; i>0 ; i--){
            for(int j=0 ; j<b-i ; j++){
                printf(" ");
            }
            for(int j=0 ; j<i ; j++){
                printf("*");
            }
            printf("\n");
        }
    }
    else{
        for(int i=b ; i>0 ; i--){
            for(int j=i ; j>1 ; j--){
                printf(" ");
            }
            for(int j=0 ; j<b-i+1 ; j++){
                printf("*");
            }
            printf("\n");
        }
    }
        
            
    
    return 0;
}