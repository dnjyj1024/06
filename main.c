#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int x)
{
	int res = 1;
	int i;
	for (i=1;i<x+1;i++){
		res = res*i;
	}			
	return res;	
}

int combination(int n, int r)
{
	int a;
	int b;
	int c;
	int res1;
	a = factorial(n);
	b = factorial(n-r);
	c = factorial(r);
	res1 = a/(b*c);
	return(res1);
}



int main(){
	int res2;
	res2 = combination(10,2);
	printf("%i",res2);

}
