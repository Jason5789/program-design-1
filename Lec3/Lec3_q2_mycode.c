#include <stdio.h>
#define AMERICANO  110
#define LATTE      150
#define CAPPUCCINO 135
#define MOCHA      145

int main() {
    int i,j;
    
	scanf("%d %d",&i,&j);
    
   switch(i){
       case 1:
        	printf("The total price is %d dollars!",j*AMERICANO);
       		break;
       case 2:
        	printf("The total price is %d dollars!",j*LATTE);
			break;
       case 3:
        	printf("The total price is %d dollars!",j*CAPPUCCINO);
       		break;
       case 4:
        	printf("The total price is %d dollars!",j*MOCHA);
       		break;
       default:
        	printf("Wait, what?");
   }
    
    return 0;
}