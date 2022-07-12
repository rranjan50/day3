//string length
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],*p=NULL;
	int l=0;
	gets(str);
	p=str;
	l=strlen(str);
	printf("string lenth using predefined string function:\n");
	printf("length=%d\n",l);
	printf("string lenth using loop:\n");
	l=0;
        for(p;*p;p++)
	{
		l++;
	}
	printf("%d\n",l);
}
