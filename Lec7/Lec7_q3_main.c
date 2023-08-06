#include<stdio.h>
#include<math.h>

char pin[1026];
int rec[2049];
int judge[11];
int player;
int rounds=1;

void game(int p1,int p2,int r){
    if(pin[p1]==pin[p2] && r==2){
        rec[rounds++]=p2;
    }
    else if(pin[p1]==pin[p2] && r==1){
        rec[rounds++]=p1;
    }
    else if(  pin[p1]=='r' && pin[p2]=='s' ){
        rec[rounds++]=p1;
    }
    else if( pin[p1]=='p' && pin[p2]=='r' ){
        rec[rounds++]=p1;
    }
    else if(  pin[p1]=='s' && pin[p2]=='p' ){
        rec[rounds++]=p1;
    }
    else{
        rec[rounds++]=p2;
    }
    //printf("%c %c  ",pin[p1],pin[p2]);
}

int main () {
    char input;
    scanf("%d",&player);
    
    for(int i=1;i<1025;i++){
        rec[i]=0;
        pin[i]=' ';
        rec[i+1024]=0;
    }

    for(int i=0;i<11;i++){
        judge[i]=0;
    }
    
    for(int h=0; h<=player ; h++){
        scanf("%c",&pin[h]);
        if(h!=player){
            rec[rounds]=h+1;
            rounds+=1;
        }
    }

    char jud;  
    for(int p=0 ; p<=log2(player) ; p++){
        scanf("%c",&jud);
        if(jud=='b'){
            judge[p]=2;
        }
        else{
            judge[p]=1;
        }
    }
    
    int now=1;
    for(int a=1;a<=log2(player);a++){

        for(int i=1 ; i<=player/pow(2,a-1) ; i+=2){
            game(rec[now],rec[now+1],judge[a]);
            now+=2;
        }
    }
    
    printf("%d",rec[2*player-1]);
    
    return 0;
}