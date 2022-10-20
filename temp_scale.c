//write a program to convert temp from celcius to farhenheit or vise versa//
#include<stdio.h>
int main()
{
	char ch;
	int temp,f,c;
	printf("choose the temp between <f/c> you want to convert\n");
	scanf("%c",&ch);
	if(ch == 'c')
	{
	printf("enter the temp in farhenheit:\n");
	scanf("%d",&temp);

	c = (temp - 32)*5/9;
	
	printf("the temperature in celcius: %d",c);
	}
	else if(ch == 'f')
	{
	printf("enter the temp in celcius\n");
	scanf("%d",&temp);

	f = (temp * 9/5)+32;

	printf("the temperature in ferhenheit:%d",f);
	}
	else {printf("invalid");}

	return 0;
}
