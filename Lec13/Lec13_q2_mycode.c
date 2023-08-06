#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int card[2*n+1];
    int now=1;
    int last=n+1;
    
    for(int i=1 ; i<=n ; i++){
    	card[i]=i;
    }
    
    for(int i=1 ; i<m+1 ; i++){
    	printf("%d ",card[now++]);
        card[last++]=card[now++];
    }
    
    return 0;
}