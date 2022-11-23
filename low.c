//lower
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("entre the string");
	fgets(str,20,stdin);
	strlwr(str);
	puts(str);
}
