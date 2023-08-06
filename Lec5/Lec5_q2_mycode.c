#include<stdio.h>

int main () {
    int bingo[8][8];
    int guess[64];
    int correct[8][8]={0};
    int point=0;
    
    for(int i=0;i<8;i++){
            scanf("%d %d %d %d %d %d %d %d",&bingo[i][0],&bingo[i][1],&bingo[i][2],&bingo[i][3],&bingo[i][4],&bingo[i][5],&bingo[i][6],&bingo[i][7]);
    }
    
    for(int i=0;i<64;i++){
    	scanf("%d ",&guess[i]);
        for(int j=0 ;j<8;j++){
            for(int k=0 ;k<8;k++){
                if(guess[i]==bingo[j][k])
                    correct[j][k]=1;
        	}
        }
    }
    
    for(int i=0;i<8;i++){
        if(correct[i][0]==1 &&correct[i][1]==1 &&correct[i][2]==1 &&correct[i][3]==1 &&correct[i][4]==1 &&correct[i][5]==1 &&correct[i][6]==1 &&correct[i][7]==1){
        	point++;
        }
    }
    
        for(int i=0;i<8;i++){
        if(correct[0][i]==1 &&correct[1][i]==1 &&correct[2][i]==1 &&correct[3][i]==1 &&correct[4][i]==1 &&correct[5][i]==1 &&correct[6][i]==1 &&correct[7][i]==1){
        	point++;
        }
    }
    
    if(correct[0][0]==1 &&correct[1][1]==1 &&correct[2][2]==1 &&correct[3][3]==1 &&correct[4][4]==1 &&correct[5][5]==1 &&correct[6][6]==1 &&correct[7][7]==1){
        point++;
    }

    if(correct[0][7]==1 &&correct[1][6]==1 &&correct[2][5]==1 &&correct[3][4]==1 &&correct[4][3]==1 &&correct[5][2]==1 &&correct[6][1]==1 &&correct[7][0]==1){
        point++;
    }
    
    printf("%d",point);
    
    return 0;
}