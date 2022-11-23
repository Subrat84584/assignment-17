//6.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("enter a string :");
	fgets(str,20,stdin);
	strrev(str);
	puts(str);
	return 0;
}
