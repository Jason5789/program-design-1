int quality=0;
int abc[26];

void find_orz(int orz_position[], int *orz_num){
	for(int i=0;i<N-2;i++){
    	if(str[i]=='o'&&str[i+1]=='r'&&str[i+2]=='z'){
        	orz_position[quality]=i;
            quality++;
        }
    }
    
    *orz_num=quality;
}

void calculate_worship(int worship_amount[], int range_index, int left_orz_position, int right_orz_position){
	for(int i=0;i<26;i++){
    	abc[i]=0;
    }
    
    int left=3+left_orz_position;
    int count=0;
    
    for(int i=left ; i<right_orz_position ;i++){
    	int input=str[i];
        if(abc[input-97]==0){
            abc[input-97]=1;
            count++;
        }
    }
    
    worship_amount[range_index]=count*(right_orz_position-left);
}
int ans=0;
int left=0;
int find_max_worship_range(int value, int *range_L, int *range_R, int left_orz_position, int right_orz_position){
    
    if(value>ans){
    	ans=value;
    *range_L=left_orz_position+1;
    *range_R=right_orz_position+1;
    }
    
    return ans;
    
}