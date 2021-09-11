//program to divide two number

#include<stdio.h>	//Header file-printf and scanf function

int Divide(int iNo1,int iNo2)	//function defination
{
		int iAns=0;				//Local variable
		
		if(iNo2==0)			//if(Condition)
		{
			return -1;		//
		}
	
		iAns=iNo1/iNo2;	//perform Division	
		return iAns;	//return Division
	
}
int main()	//Entry point function
{
	int iValue1=25,iValue2=0,iRet=0;	//Local variable
	
	iRet=Divide(iValue1,iValue2);		//function call
	printf("Division is : %d",iRet);	//print the output
	
	return 0;							//return to OS. 0 is success
}