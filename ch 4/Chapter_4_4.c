#include "stdio.h"
void main()
{
	char color;
	printf("\nEnter first letter of a color - ");
	scanf("%c", &color);
	if((color == 'o') || (color == 'O'))
	{
		printf("\n orange contains ammonia \n");
	}
	else if((color == 'b') || (color == 'B'))
	{
		printf("\n brown contains carbon monoxide \n");
	}
	else if((color == 'y') || (color == 'Y'))
	{
		printf("\n yellow contains hydrogen \n");
	}
	else if((color == 'g') || (color == 'G'))
	{
		printf("\n green contains oxygen \n");
	}
	else
	{
		printf("\nContents Unknown");
	}
}
