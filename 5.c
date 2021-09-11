//Accept one no from user and print *on screen.

#include<stdio.h>

void Display(int iNo)
{
	int i=0;
	
	for (i=1;i<=5;i++)
	{
		printf("*\t");
	}
}
int main()
{
	int iValue=0;
	iValue=5;
	Display(iValue);
	
	return 0;
}