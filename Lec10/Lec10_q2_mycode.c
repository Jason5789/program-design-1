int length(char pwd1[], char pwd2[]) {
    if(strlen(pwd1)<6 || strlen(pwd1)>16){
        return 1;
    }
    if(strlen(pwd2)<6 || strlen(pwd2)>16){
        return 1;
    }
    
    return 0;
}

int compare(char pwd1[], char pwd2[]) {
    if(strcmp(pwd1,pwd2)==0)
    	return 0;
    else
        return 1;
}

int content(char pwd1[]) {
    int big=0;
    int small=0;
    int num=0;
    for( int i=0 ; i<strlen(pwd1) ;i++){
    	if(pwd1[i]>='A' && pwd1[i]<='Z'){
        	big++;
        }
        else if(pwd1[i]>='a' && pwd1[i]<='z'){
        	small++;
        }
        else if(pwd1[i]>='0' && pwd1[i]<='9'){
        	num++;
        }
        
        if(big>0&&small>0&&num>0)
            return 0;
    }
    return 1;
}