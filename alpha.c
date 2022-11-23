//alphabet
#include<stdio.h>
int main()
{
	char str[20];
	printf("enter the string ");
	fgets(str,20,stdin);
	int spe,num,alp,i;
	spe=num=alp=i=0;
	while(str[i]!='\0')
     {
          if(str[i]>='a'&&str[i]<='z')
            {
		  
		  	alp++;
		     }
		  	else if(str[i]>='0'&&str[i]<='9')
		  	{
		  	num++;
			  }
		  	else
		  	{
			
		  	spe++;
			  }
		  	i++;
	   }	
	   printf("Total alphabets are:%d\n",alp);
	   printf("Total no of num is:%d\n",num);
	   printf("Total no of special charactre is:%d\n",spe);
	   return 0;
	
}
