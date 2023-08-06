
#include<stdio.h>

int main(){
    int s=INIT_STRENGTH;
    int o=INIT_OBEDIENCE;
    int success;
    char c[80];

    for(int i=0;i<80;){
        c[i]=getchar();
        if(c[i]=='\n'){
            break;
        }
        if(c[i]=='e'){
           s+=STRENGTH_EAT;
           o-=OBEDIENCE_EAT;
        }
        else if(c[i]=='t'){
           s-=STRENGTH_TRAIN;
           o+=OBEDIENCE_TRAIN;
        }
        if(o>=LEARN_OBEDIENCE && s<=LEARN_STRENGTH){
			success++;
            o=INIT_OBEDIENCE;
        }
        
        i++;
    }
    
    	if(success>=5){
    		printf("Yes");
        }
        else{
            printf("No");
        }

    return 0;
}