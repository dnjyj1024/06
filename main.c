#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a,int b)
{
	printf("%d\n",a+b);
}
int square(int n)
{
	printf("%d\n",n*n);
}
int get_max(int x,int y)
{
	if (x>y)
	printf("%d\n",x);
	else
	printf("%d\n",y);
}
int main(void) {
	sumTwo(2,3);
	square(2);
	get_max(5,3);
	
	return 0;
}
