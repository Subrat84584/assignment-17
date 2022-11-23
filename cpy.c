//c language to in c copy one string to another string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("enter your string:");
	fgets(str,20,stdin);
	char str1[20];
	strcpy(str1,str);
	puts(str1);
	return 0;
}
