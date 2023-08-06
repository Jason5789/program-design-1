#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main () {
    int num;
    int time=0;
    int a=0;
    int up=1;
    
    
    scanf("%d",&num);
    
    char c[10000];
    char trash=getchar();

    for(int i=0; ;){
        if(time==num){
            break;
        }
        c[i]=getchar();
        if(c[i]==';'||c[i]=='.'||c[i]==','){
            time++;
        }
        i++;
    }
    time=0;
    for(int i=0; ;){
        if(time==num){
            break;
        }
        if(up==0){
            c[i]=tolower(c[i]);
        }
        if(up==1){
            c[i]=toupper(c[i]);
            up=0;
        }
        if(c[i]==';'||c[i]=='.'||c[i]==','){
            c[i]='\n';
            up=1;
            time++;
        }
        if(c[i]==' '){
            up=1;
        }
        printf("%c",c[i]);
        i++;
    }

    return 0;
}