//vowel
#include<stdio.h>
int main()
{
	char str[20];
	printf("enter a string :");
	fgets(str,20,stdin);
	int c=0,i;
	for(i=0;str[i];i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			c++;
		}
	}
	printf("vowels of this string: %d",c);
	return 0;
}
