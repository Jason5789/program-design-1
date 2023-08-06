int ok[10][3]={0};
int list[192][2];
int wrong=0;

void check_sudoku(int (*grid_p)[NUM]){
	for(int i=0 ; i<9; i++){
        for(int j=0 ; j<9 ; j++){
            if(ok[ *(grid_p[i]+j) ][0]==0){
                ok[ *(grid_p[i]+j) ][0]++;
                ok[ *(grid_p[i]+j) ][1]=i;
                ok[ *(grid_p[i]+j) ][2]=j;
            }
            else{
                ok[ *(grid_p[i]+j) ][0]++;
                list[wrong][0]=i;
                list[wrong][1]=j;
                wrong++;
            }
        }

        
        for(int k=1 ; k<=9 ; k++){
            if(ok[ k ][0]>1){
                list[wrong][0]=ok[ k ][1];
                list[wrong][1]=ok[ k ][2];
                wrong++;
            }
        }

        for(int ii=1 ; ii<10 ; ii++){
            for(int iii=0 ; iii<3 ; iii++){
                ok[ii][iii]=0;
            }
        }
    }


    for(int i=0 ; i<9; i++){
        for(int j=0 ; j<9 ; j++){
            if(ok[ *(grid_p[j]+i) ][0]==0){
                ok[ *(grid_p[j]+i) ][0]++;
                ok[ *(grid_p[j]+i) ][1]=j;
                ok[ *(grid_p[j]+i) ][2]=i;
            }
            else{
                ok[ *(grid_p[j]+i) ][0]++;
                list[wrong][0]=j;
                list[wrong][1]=i;
                wrong++;
            }
            
        }

        for(int k=1 ; k<=9 ; k++){
            if(ok[ k ][0]>1){
                list[wrong][0]=ok[ k ][1];
                list[wrong][1]=ok[ k ][2];
                wrong++;
            }
        }

        for(int ii=1 ; ii<10 ; ii++){
            for(int iii=0 ; iii<3 ; iii++){
                ok[ii][iii]=0;
            }
        }
    }


    for(int i=0 ; i<9; i++){
        for(int j=0 ; j<9 ; j++){
            if(ok[ *(grid_p[j/3+(i/3)*3]+(j%3+(i%3)*3)) ][0]==0){
                ok[ *(grid_p[j/3+(i/3)*3]+(j%3+(i%3)*3)) ][0]++;
                ok[ *(grid_p[j/3+(i/3)*3]+(j%3+(i%3)*3)) ][1]=j/3+(i/3)*3;
                ok[ *(grid_p[j/3+(i/3)*3]+(j%3+(i%3)*3)) ][2]=j%3+(i%3)*3;
            }
            else{
                ok[ *(grid_p[j/3+(i/3)*3]+(j%3+(i%3)*3)) ][0]++;
                list[wrong][0]=j/3+(i/3)*3;
                list[wrong][1]=j%3+(i%3)*3;
                wrong++;
            }
        }

        for(int k=1 ; k<=9 ; k++){
            if(ok[ k ][0]>1){
                list[wrong][0]=ok[ k ][1];
                list[wrong][1]=ok[ k ][2];
                wrong++;
            }
        }

        for(int ii=1 ; ii<10 ; ii++){
            for(int iii=0 ; iii<3 ; iii++){
                ok[ii][iii]=0;
            }
        }
    }



    for(int i=0 ; i<9 ; i++){
        for(int j=0 ; j<9 ; j++){
            for(int k=0 ; k<wrong ; k++){
                if(list[k][0]==i&&list[k][1]==j){
                    printf("(%d,%d)\n",i,j);
                    break;
                }
            }
        }
    }
    
}