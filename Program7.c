
#include <stdio.h>
void main(){
	int x;
	printf("Enter number : ");
	scanf("%d",&x);

	if(x <= 10){
		printf("%d is less than 10\n",x);
	}else if(10 < x < 20){
		printf("%d is greater than 10 and less than 20\n",x);
	}else{
		printf("Happy Coding\n");
	}
}
