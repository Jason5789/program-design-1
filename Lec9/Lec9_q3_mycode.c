void sort_section(int *ptr, int *qtr) {
	int length=ptr-qtr;
    if(length<0){
        length=-length;
        for(int i=0 ; i<length ; i++){
            for(int j=0 ; j<length-i ; j++){
                if(*(ptr+j)>*(ptr+j+1)){
                int sort=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=sort;
                } 
            }
            for(int k=0 ; k<=length ; k++){
                printf("%d",*(ptr+k));
                if(k!=length){
                    printf(" ");
                }
                else{
                    printf("\n");
                }
            }
        }
    }
    else{
        for(int i=0 ; i<length ; i++){
            for(int j=0 ; j<length-i ; j++){
                if(*(qtr+j)>*(qtr+j+1)){
                int sort=*(qtr+j);
                *(qtr+j)=*(qtr+j+1);
                *(qtr+j+1)=sort;
                } 
            }
            for(int k=0 ; k<=length ; k++){
                printf("%d",*(qtr+k));
                if(k!=length){
                    printf(" ");
                }
                else{
                    printf("\n");
                }
            }
        }
    }
}