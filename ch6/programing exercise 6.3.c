#include<stdio.h>

int sum(int a, int b);

int main()
{
 	int x, y, z;
 	x = 7; y = 2;
 	printf(" x y z\n\n");
 	
	z = sum(x, y);
 	printf("%4d%4d%4d\n", x, y, z);
 	
	z = sum(y, x);
 	printf("%4d%4d%4d\n", x, y, z);
 	
	x = sum(z, y);
 	printf("%4d%4d%4d\n", x, y, z);
 	
	x = sum(z, z);
 	printf("%4d%4d%4d\n", x, y, z);
 	
	y = sum(y, y);
 	printf("%4d%4d%4d\n", x, y, z);
 	
	return (0);
}

int
sum(int a, int b)
{
 	return a + b;
}