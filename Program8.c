
#include <stdio.h>
void main(){
	int x;
	printf("Enter number : ");
	scanf("%d",&x);

	if(x % 3 == 0)
		printf("%d is divisible by 3\n",x);
	else
		printf("%d is not divisible by 3\n",x);
}
