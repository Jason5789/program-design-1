#include<stdio.h>

int mech[30];

int main () {
    for(int i=0;i<30;i++){
    	mech[i]=10;
    }
    
    int n;
    scanf("%d",&n);
    
    int choose;
    int q;
    
    for(int i=0 ; i<n ; i++){
    	scanf("%d",&choose);
        scanf("%d",&q);
        choose--;
        if(q>mech[choose]){
        	mech[choose]=0;
        }
        else{
        	mech[choose]-=q;
        }
    }
    int total=0;
    
    for(int i=0;i<30;i++){
        printf("%d",mech[i]);
        if(i%10==9){
        	printf("\n");
        }
        else{
        	printf(" ");
        }
        
        if(i<10){
        	total=total+10*(10-mech[i]);
        }
        else if(i<20){
        	total=total+20*(10-mech[i]);
        }
        else{
        	total=total+30*(10-mech[i]);
        }
    }
    
    printf("Earned: $%d",total);
    return 0;
}