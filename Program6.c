
#include <stdio.h>
void main(){
	int x;
	printf("Enter number : ");
	scanf("%d",&x);

	if(x%2 == 0)
		printf("%d is even\n",x);
	else
		printf("%d is odd\n",x);
}
