//REVERSE OF STRING
#include<stdio.h>
int main()
	{
		char str[10],rev[10],l=0;
		gets(str);
		l=strlen(str);
		reverse(str,rev,l);
		printf("%s\n",rev);
	}
void reverse(char *p,char *q,int l)
{
	char *temp;
	temp=q;
	q=q+l-1;
	for(p,q;*p;p++,q--)
	{
		*q=*p;
	
	}
	if(*p=='\0')
	{
		*(temp+l)='\0';
	}
	printf("%s\n",temp);
}



