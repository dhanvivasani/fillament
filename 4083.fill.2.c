#include<stdio.h>

void main()
{
	
	char A[100],B[100];
	
	printf("enter your username:=");
	gets(A);
	printf("enter your pass:=");
	gets(B);
	
	if (strcmp(A,"dhanvi")==0)
	{
	  if(strcmp(B,"dhanvi@1104")==0)
    	{
		
		printf("user login successfully......");
	    }
        	else
     	{
		
		printf("your enter pass is invaild");
     	}
	
    }
 else
{
	printf("your enter username is invaild");
}


}
