#include<stdio.h>

int main () {
    char c;
    int value=0;
    char wrong[10];

    while(1){
        int total=0;
    	c=getchar();
        if(c=='\n'){
        	break;
        }
        else{
            wrong[0]=c;
            if(c>96) c-=32;
            switch(c){
                case 'A':
                case 'L':
                    value=0;
                    break;
                case 'B':
                    value=1;
                    break;
                case 'C':
                case 'N':
                case 'Z':
                    value=2;
                    break;
                case 'D':
                case 'P':
                    value=3;
                    break;
                case 'E':
                case 'F':
                case 'Q':
                    value=4;
                    break;
                case 'R':
                    value=5;
                    break;
                case 'H':
                case 'S':
                    value=6;
                    break;
                case 'I':
                case 'T':
                    value=7;
                    break;
                case 'J':
                case 'U':
                    value=8;
                    break;
                case 'K':
                case 'V':
                    value=9;
                    break;
            }

            total+=value*9;

            for(int i=8;i>0;i--){
                c=getchar();
                wrong[9-i]=c;

                int q=c-48;
                total+=q*i;
            }

            if((total%10)!=0){
                for(int i=0;i<9;i++){
                    printf("%c",wrong[i]);
                }
                printf(" is the imposter!!!\n");
            }
            c=getchar();
        }

        
        
    }

    
    
    return 0;
}