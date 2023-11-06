#include<stdio.h>
int main()
{
	char str[200];
	int count=0;
	printf("enter string:");
	scanf("%s",str);
	

	for(int i=0;str[i]!=0;i++)
	count++;
	printf("the length of the string is %d",count);
	return(0);
}
