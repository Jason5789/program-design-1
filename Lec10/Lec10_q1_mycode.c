#include<stdio.h>

int main () {
    int monster,blood;
    int legal=0;
    int player=0;
    int action=0;
    int def=0;
    int ans=0;
    int count=0;
    int win=-1;
    char sen[627];
    
    scanf("%d %d",&monster,&blood);
    char trash=getchar();
    
    char c;
    while((c=getchar())!='\n'){
    	sen[count++]=c;
    }
    
    for(int i=0 ; i<count ; i++){
        def=0;
    	if(sen[i]=='P'&&sen[i+5]=='P'&&sen[i+10]=='P'&&sen[i+15]=='P'&&sen[i+1]=='A'&&sen[i+3]=='A'&&sen[i+6]=='A'&&sen[i+8]=='A'&&sen[i+11]=='A'&&sen[i+13]=='A'&&sen[i+2]=='T'&&sen[i+7]=='T'&&sen[i+12]=='T'&&sen[i+16]=='O'&&sen[i+17]=='N'){
            player++;
            if(player==monster&&win==-1){
                win=1;
            	ans=blood;
            }
            i+=18;
        }
        else if(sen[i]=='P'&&sen[i+4]=='P'&&sen[i+8]=='P'&&sen[i+13]=='P'&&sen[i+1]=='O'&&sen[i+5]=='O'&&sen[i+14]=='O'&&sen[i+2]=='N'&&sen[i+6]=='N'&&sen[i+15]=='N'&sen[i+9]=='A'&&sen[i+11]=='A'&&sen[i+10]=='T'){
            if(player>=monster-3&&player<=monster+3){
                blood--;
            }
            if(blood==0&&win==-1){
                win=0;
            	ans=legal+1;
            }
            i+=16;
        }
        else if(sen[i]=='C'&&sen[i+6]=='C'&&sen[i+1]=='H'&&sen[i+7]=='H'&&sen[i+2]=='A'&&sen[i+4]=='A'&&sen[i+8]=='A'&&sen[i+10]=='A'&&sen[i+13]=='A'&&sen[i+15]=='A'&&sen[i+12]=='P'&&sen[i+17]=='P'&&sen[i+14]=='T'&&sen[i+18]=='O'&&sen[i+19]=='N'){
            player--;
            def=1;
            i+=20;
            if(player==monster&&win==-1){
                win=1;
            	ans=blood;
            }
        }
        else{
        	while(sen[i]!=','&&sen[i]!='.'){
            	i++;
            }
            legal--;
        }
        
        legal++;
        action++;
        
        if(action%10==0&&def==0&&win==-1){
            win=1;
        	ans=blood;
        }
    }
    
    if(win==-1){
    	printf("NO %d",blood);
    }
    else if(win==0){
    	printf("YES %d",ans);
    }
    else{
    	printf("NO %d",ans);
    }
    
    return 0;
}