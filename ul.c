#include <stdio.h>
int main(void) {
	char str[40];
	int i;
	scanf("%s",str);
	for(i=0;i<=10;i++)
	{
	if((str[i]>='a')&&(str[i]<='z'))
	{
		str[i]=str[i]-32;
	}
	else
	{
		str[i]=str[i]+32;
	}
	}
	printf("%s",str);
	
	return 0;
}
