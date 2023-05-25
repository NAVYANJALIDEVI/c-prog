#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i;
	int spl=0,lwr=0;
	printf("Enter the string:");
	gets(str);
	for(i=0;str[i]='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
		  lwr++;
	    }
		else
		{
		  spl++;
	    }  
	}
	printf("Lower characters:%d\n",lwr);
	printf("special characters:%d",spl);
	return 0;
}

