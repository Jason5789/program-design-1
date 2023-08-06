#include<stdio.h>

int main () {
    int num;
    long int sum=0;
    
    scanf("%d",&num);
    int prefix[num];
    
    for(int i=0 ; i<num ; i++){
    	scanf("%d",&prefix[i]);
    }
    
    for(int i=0 ; i<num ; i++){
    	sum+=prefix[i];
        
        if(sum%prefix[i]==0){
            printf("%ld %d\n",sum,prefix[i]);
        }
    }

    return 0;
}