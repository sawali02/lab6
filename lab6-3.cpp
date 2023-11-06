#include<stdio.h>
int main()
{
	int n,k;
	printf("enter the lenght of string 1");
	scanf("%d",&n);
	char str[n];
	
	
		printf("enter string1:");
		scanf("%s",&str);
	
	printf("enter the lenght of string 2");
	scanf("%d",&k);
	char str2[k];
	printf("enter string2");
	scanf("%s",&str2);
	int j=n+k;
	char str3[j];
	for(int i=0;i<n;i++)
	str3[i]=str[i];
	for(int i=0;i<k;i++)
	str3[n+i]=str2[i];
	for(int i=0;i<j;i++)
	printf("%c",str3[i]);
	return(0);
	
	
}
