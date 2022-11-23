//write a program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("enter your string  :");
	fgets(str,20,stdin);
	int l=strlen(str);
	printf("%d",l);
	int i,j;
	char temp;
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(str[i]>str[j])
			{
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
			}
		}
	}
	printf("after sorting :%s",str);
	return 0;
}
