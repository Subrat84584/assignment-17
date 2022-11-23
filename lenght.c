//calculate of the string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i;
	printf("entre your name  ");
	fgets(str,20,stdin);
	int l=strlen(str);
	printf("length of the string is:%d",l);   //print with null charaecter
	return 0;
}
