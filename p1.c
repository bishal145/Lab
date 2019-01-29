#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i=0,f=0;
char buff[100];
void s()
{
	if(buff[i]=='a')
	{
		i++;
		s();
	}
	else
	{
		if(buff[i]=='b')
		{
			i++;
		}
	}
}
int main()
{
	int l;
	printf("Enter The String:");
	scanf("%s",buff);
	l=strlen(buff);
	
	s();
	
	if((l==i)&&(f==0))
	{
		printf("String Parsed Successfully.");
	}
	else
	{
		printf("String rejected.");
	}
	return 0;
}
