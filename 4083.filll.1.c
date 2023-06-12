#include<stdio.h>
void main()

{
	 char  c[100],
	       d[100];
	       
	       printf("enter the string you want to cheak:=");
	       gets(c);
	       strcpy(d,c);
	       strrev(d);
	       
	       if ( strcmp (c,d)==0)
	       {
	       	
	       	printf(" enter string is plaindrome");
		   }
		   else
		   {
		   	printf("enter string is not plaindrome");
		   }
}
