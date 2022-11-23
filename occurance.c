//occurance character    mean how many times one char present in the string.
#include<stdio.h>
int main()
{
	char str[20],a;
	printf("enter a string \n");
	fgets(str,20,stdin);
	printf("enter your character for find your occurance of this char :");
	scanf("%c",&a);
	int i;
	int c=0;
	for(i=0;str[i];i++)
	{
		if(a==str[i])
		c++;
	}
	printf("occurance of the character:%d",c);
	return 0;
}
