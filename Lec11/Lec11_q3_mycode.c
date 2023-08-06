void count(const char *name)
{
    int choose;
    for(int i=0;i<cand_cnt;i++){
    	if(strcmp(name,counter[i].name)==0){
        	choose=i;
        }
    }
	counter[choose].count++;
}

const char *winner()
{
	int max=0;
    int maxi=0;
    char str[1000];
    for(int i=0;i<cand_cnt;i++){
    	if(counter[i].count>max){
        	max=counter[i].count;
            maxi=i;
        }
    }
    
    return counter[maxi].name;
}