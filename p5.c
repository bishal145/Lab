#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i=0,f=0;
char buff[100];
void S();
void Sd();
void A();
void X();
void Ad();

void S()
{
	if(buff[i]=='c')
	{
		i++;
		Sd();
		X();
	}
	else if(buff[i]=='e')
	{
		i++;
		Ad();
		if(buff[i]=='b')
		{
			i++;
			Sd();
		}	
	}
	else 
		f=1;
}
void X()
{
	if(buff[i]=='d')
	{
		i++;
		Ad();
		if(buff[i]=='b')
		{
			i++;
			Sd();
		}
	}
	else 
		return;
}
void Sd()
{
	if(buff[i]=='a')
	{
		i++;
		Sd();
	}
	else 
		return;
}
void A()
{
	if(buff[i]=='c')
	{
		i++;
		Sd();
		if(buff[i]=='d')
		{
			i++;
			Ad();
		}	
	}
	else if(buff[i]=='e')
	{
		i++;
		Ad();
	}
}
void Ad()
{
	if(buff[i]=='c')
	{
		i++;
		Ad();
	}
	else if(buff[i]=='b')
	{
		i++;
		Sd();
		if(buff[i]=='d')
		{
			i++;
			Ad();
		}	
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
