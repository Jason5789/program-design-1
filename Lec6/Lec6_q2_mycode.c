
#include<stdio.h>

int main () {
    int people,detail,min,max;
    
    scanf("%d",&people);
    
    int grade[people];
    
    for (int i=0;i<people;i++){
        scanf("%d",&grade[i]);
    }
    
    scanf("%d",&detail);

	int res[3][detail];
    
    for(int i=0 ; i<detail ; i++){
        scanf("%d %d",&min,&max);
        int low=0;
        int med=0;
        int high=0;
    	for(int j=0;j<people;j++){
        	if(grade[j]<min){
            	low++;
        	}
            else if(grade[j]>=max){
            	high++;
        	}
            else{
                med++;
            }
    	}
        printf("%d %d %d\n",low,med,high);
    }
    
    return 0;
}