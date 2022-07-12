//highest frequency of a character in a string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[100];
	int size,count=0,max=0,i,j,l,b;
//	str=calloc(1,size);
	gets(str);
	l=strlen(str);
	printf("%s\n",str);
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			if(str[i]==str[j])
			{
				count++;
			}
		}
			if(count>max)
			{
				max=count;
				b=str[i];
			}
			count=0;
	}
	printf("character with highest frequency is %c with max occurrence is %d \n",b,max);

}
