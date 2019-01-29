#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i=0,f=0;
char buff[100];
void S();
void Sd();
void Ad();

void S()
{
	if(buff[i]=='b')
	{
		i++;
		Sd();
	}
	else if(buff[i]=='d')
	{
		i++;
		Ad();
		if(buff[i]=='a')
		{
			i++;
		}
		else  f=1;
	}
	else 
		f=1;
}
void Sd()
{
	if(buff[i]=='c')
	{
		i++;
		Ad();
		if(buff[i]=='a')
		{
			i++;
		}
	}
	else 
		return;
}
void Ad()
{
	if(buff[i]=='b')
	{
		i++;
		Ad();
	}
	else if(buff[i]=='a')
	{
		i++;
		if(buff[i]=='c')
		{
			i++;
		}
		Ad();
	}
	else 
		return;
}
int main()
{
	int l;
	printf("Enter The String:");
	scanf("%s",buff);
	l=strlen(buff);
	
	S();
	
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
