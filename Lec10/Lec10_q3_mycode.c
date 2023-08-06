void recovery(char *hw) {
    char test[100];
    char ans[4096];
    int ans_i=0;
    int wrong=0;
    int count=0;
    int big=0;
    
    int circle=0;
    while(big==0){
        circle=0;
        wrong=0;
        int p=0;
        if(hw[count]==' '){
            wrong=1;
        }
        while(circle==0){
            if(hw[count]==' '||hw[count]=='\0'||hw[count+1]=='\0'){
            	circle=1;
            }

            if(hw[count]=='\0'){
            	circle=1;
                big=1;
            }

            if( (hw[count]>='A'&&hw[count]<='Z') || (hw[count]>='a'&&hw[count]<='z') || hw[count]=='.'||hw[count]==','||hw[count]=='!'||hw[count]=='?'||hw[count]==' '||hw[count]=='\0'||hw[count]=='\n'){
            }
            else{
                wrong=1;
            }

            if(hw[count]=='.'||hw[count]==','||hw[count]=='!'||hw[count]=='?'){
                if( hw[count-1]<'A'|| (hw[count]>'Z' && hw[count-1]<'a' ) || hw[count]>'z' ){
                    wrong=1;
                }
                else if(hw[count+1]==' '||hw[count+1]=='\0'||hw[count+1]=='\n'){
                }
                else{
                    wrong=1;
                }
            }
            test[p++]=hw[count++];
        }
        
        if(p>22||p<=1){
            //printf("%d",p);
            wrong=1;
        }

        if(wrong==0){
            for(int i=0 ; i<p ; i++){
                ans[ans_i++]=test[i];
            }
        }
        
        for(int i=0 ; i<30 ; i++){
            test[i]=' ';
        }
    }
    
    strncpy(hw,ans,sizeof(ans)-1);
}