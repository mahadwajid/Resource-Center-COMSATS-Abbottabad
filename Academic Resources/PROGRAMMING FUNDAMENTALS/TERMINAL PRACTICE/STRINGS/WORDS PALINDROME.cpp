#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int start;
	int end;
	int len;
	
	printf("ENTER ANY STRING: \n");
	gets(str);
	
	len=strlen(str);
	
	for(int i=len-1; i>=0; i--)
	{
		if(str[i]==' ')
		{
			str[i]='\0';
			printf(" %s",&str[i]+1);
		}
		
	}
	printf("%s",str);
	return 0;


}