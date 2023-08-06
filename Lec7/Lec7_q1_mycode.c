#include<stdio.h>

int qua[21][21];
int much[21];

int rec(int i){
    if(much[i]==0){
        return 1;
    }
    else{
        int z=0;
        for (int a=1;a<=much[i];a++){
            z+=rec(qua[i][a]);
        }
        return z;
    }
}

int main () {
    int n,m,o;
    
    for(int i=1;i<=20;i++){
        for(int j=1;j<=20;j++){
            qua[i][j]=0;
        }
        much[i]=0;
    }
    
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        scanf("%d",&m);

        if(m==0){
            much[i]=0;
        }
        else{
            much[i]=m;

            for(int j=1;j<=m;j++){
            scanf("%d",&o);
            qua[i][j]=o;
            }
        }
    }
    
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=rec(i);
    }
    
    printf("%d",ans); 
    
    return 0;
}