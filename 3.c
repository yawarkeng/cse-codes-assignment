#include<stdio.h>
int main(){
	int x,y;
	printf("Enter two numbers:");
	scanf("%d%d",&x,&y);
	if (x>y)
	printf("%d is greater than %d",x,y);
	else if (x<y)
	printf("%d is smaller than %d",x,y);
	else
	printf("both numbers are equal,");
	return 0;
}
