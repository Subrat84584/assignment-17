//frequency
#include<stdio.h>
int main()
{
	char str[20],n,i,c=0;
	printf("enter your string");
	fgets(str,20,stdin);
	printf("enter your character to know frequency");
	scanf("%c",&n);
	for(i=0;str[i];i++)
	{
		if(str[i]==n)
		c++;
	}
	printf("frequency of your character:%d",c);
	return 0;
}
