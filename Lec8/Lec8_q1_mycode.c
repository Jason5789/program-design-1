#include <stdio.h>
#include <math.h>

int main(){
    int arraya[32];
    int arrayb[32];
    int arrayc[32];

	int a,b,c,in_a,in_b;
    int expa,expb,numa,numb,carry;
    scanf("%d %d",&a,&b);

    for(int i=0 ; i<32 ; i++){
      arraya[i]=0;
      arrayb[i]=0;
    }
    in_a=a;
    in_b=b;
    if(a<0){
        arraya[0]=1;
        a=-a;
    }
    if(b<0){
        arrayb[0]=1;
        b=-b;
    }

    numa=a;
    numb=b;
    carry=0;
    c=0;

    expa=log2(a)+127;
    expb=log2(b)+127;
    
    if(expa>=128) arraya[1]=1;
  	if(expa%128>=64)  arraya[2]=1;
    if(expa%64>=32)  arraya[3]=1;
    if(expa%32>=16)  arraya[4]=1;
    if(expa%16>=8)  arraya[5]=1;
    if(expa%8>=4)  arraya[6]=1;
    if(expa%4>=2)  arraya[7]=1;
    if(expa%2==1)  arraya[8]=1;
    
    if(expa>=128) arrayb[1]=1;
  	if(expb%128>=64)  arrayb[2]=1;
    if(expb%64>=32)  arrayb[3]=1;
    if(expb%32>=16)  arrayb[4]=1;
    if(expb%16>=8)  arrayb[5]=1;
    if(expb%8>=4)  arrayb[6]=1;
    if(expb%4>=2)  arrayb[7]=1;
    if(expb%2==1)  arrayb[8]=1;

    int cal1=log2(numa);
    int arraycala[cal1+1];

    for(int i=cal1 ;i>=0;i--){
      arraycala[i]=numa%2;
      numa=numa/2;
    }
    
    for(int i=0;i<23;i++){
      int calto=cal1;
      if(i<calto){
        arraya[i+9]=arraycala[i+1];
      }
      else{
        arraya[i+9]=0;
      }
    }

    int cal2=log2(numb);
    int arraycalb[cal1+1];

    for(int i=cal2 ;i>=0;i--){
      arraycalb[i]=numb%2;
      numb=numb/2;
    }
    
    for(int i=0;i<23;i++){
      int calto=cal2;
      if(i<calto){
        arrayb[i+9]=arraycalb[i+1];
      }
      else{
        arrayb[i+9]=0;
      }
    }

    for(int i=31;i>=0;i--){
      if(carry+arraya[i]+arrayb[i]==3){
        arrayc[i]=1;
        carry=1;
      }
      else if(carry+arraya[i]+arrayb[i]==2){
        arrayc[i]=0;
        carry=1;
      }
      else if(carry+arraya[i]+arrayb[i]==1){
        arrayc[i]=1;
        carry=0;
      }
      else{
        arrayc[i]=0;
        carry=0;
      }
    }

    for(int i=0 ; i<32 ; i++){
      if(arrayc[0]==0){
        if(arrayc[31-i]==1){
          c+=pow(2,i);
        }
      }
      else{
        if(arrayc[31-i]==0){
          c+=pow(2,i);
        }
        if(i==31){
          c++;
        }
      }
    }

    printf("   ");
    for(int i=0;i<32;i++){
      printf("%d",arraya[i]);
      if(i==7 || i==15 || i==23) printf(" ");
    }
    printf("\n+) ");
    for(int i=0;i<32;i++){
      printf("%d",arrayb[i]);
      if(i==7 || i==15 || i==23) printf(" ");
    }
    printf("\n---------------------------------------\n   ");
    for(int i=0;i<32;i++){
      printf("%d",arrayc[i]);
      if(i==7 || i==15 || i==23) printf(" ");
    }
    printf("\n%d",in_a);
    printf(" + %d = ",in_b);
    if(arrayc[0]==1) printf("-");
    printf("%d",c);

    return 0;
}