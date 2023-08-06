#include <stdio.h>

int main () {
    int password[6]={100,100,100,100,100,100};
    int d1,d2;
    
    for(int i=0;i<75;i++){
		scanf("%d %d",&d1,&d2);
        if(d2%2==1){
            password[d1-1]++;
        }
        else{
            password[d1-1]--;
        }
    }
    for(int i=0 ;i<6;i++){
        printf("%d ",password[i]%10);
    }
    
    return 0;
}