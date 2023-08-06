void init(int**** ptr) {
    for(int a=0 ; a<20 ;a++){
         ptr[a]=malloc(sizeof(int***)*20);
    	 for(int b=0 ; b<20 ;b++){
             ptr[a][b]=malloc(sizeof(int**)*20);
    		 for(int c=0 ; c<20 ;c++){
    			ptr[a][b][c]=malloc(sizeof(int*)*20);
    		}
    	}
    }
}