#include<stdio.h>
#include<math.h>

int main () {
    float money;
    scanf("%f",&money);
    
    if(money<5000){
        float before=money*0.2966*1.08+0.5;
        float after=money*0.2178*1.10+0.5;
        int a=after;
        int b=before;
        int ans=b-a;
        printf("%d",ans);
    }
    else{
    	float before=money*0.2966+0.5;
        float after=money*0.2178+0.5;
        int a=after;
        int b=before;
        int ans=b-a;
        printf("%d",ans);
    }
    return 0;
}