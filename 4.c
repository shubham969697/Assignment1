


//Accept one no from user and check whether is it divisible by 5 or not

#include<stdio.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

bool Divide(int iNo)	//55
{
	if(iNo%5==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	int iValue1=0;
	bool bret=FALSE;
	
	printf("Enter no\n");
	scanf("%d",&iValue1);
	
	bret=Divide(iValue1);
	if(bret==TRUE)
	{
		printf("Divisible by 5\n");
	}
	else
	{
		printf("Not divisible by 5\n");
	}
	return 0;
}