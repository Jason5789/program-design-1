#include <stdio.h>

int main () {
    int ppt=100;
    int dpt=100;
    int d1,d2,d3,d4,d5,d6;
    
    do{
    	scanf("%d %d %d %d %d %d",&d1,&d2,&d3,&d4,&d5,&d6);
        
        if((d1+d2+d3)%2==1){
            if(d4<d5&&d5<d6){
                dpt-=25;
            }
            else if(d4%2==d5%2 || d5%2==d6%2){
                dpt-=5;
            }
        }
        else{
            if(d5-d4>d6||d4-d5>d6){
                ppt-=15;
            }
            else if((d4+d5)!=d6){
            	ppt-=5;
            }
        }
    }while(ppt>0&&dpt>0);
    
    if(dpt<=0){
    	printf("Player wins");
    }
    else{
    	printf("Dragon wins");
    }
    
    return 0;
}