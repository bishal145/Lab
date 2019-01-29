#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i=0,f=0;
char buff[100];
void E();
void T();
void Ed();
void Td();
void F();

void E()
{
	T();
	Ed();
}
void Ed()
{
	if(buff[i]=='+')
	{
		i++;
		T();
		Ed();
	}
	else 
		return;
}
void T()
{
	F();
	Td();
}
void Td()
{
	if(buff[i]=='*')
	{
		i++;
		F();
		Td();
	}
	else 
		return;
}
void F()
{
	if(buff[i]=='(')
	{
		i++;
		E();
		if(buff[i]==')')
		{
			i++;
		}
		else 
			f=1;
	}
	else if(buff[i]>='0'&&buff[i]<='9')
	{
		i++;
	}
	else f=1;
		
}
int main()
{
	int l;
	printf("Enter The String:");
	scanf("%s",buff);
	l=strlen(buff);
	
	E();
	
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
