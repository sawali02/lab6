#include<stdio.h>
int main()
{int n;
printf("enter the length of string");
scanf("%d",&n);
	char str[n];
	for(int i=0;i<n;i++)
	{
	
	printf(" element %d:",i);
	scanf("%s",&str[i]);}
	char str2[n];
	for(int i=0;i<n;i++)
	{
		str2[i]=str[i];
		
	}
	
	printf("the new string is  ");
	for(int i=0;i<n;i++)
printf("%c",str[i]);
	return(0);
}
