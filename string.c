#include <stdio.h>
#include<string.h>
int main(void) {
	char a[200];
	char b[100];
	int k;
	int i ,count;
	int m,n;
	scanf("%s %s",a,b);
	scanf("\n%d",&k);
	m=strlen(a);
	n=strlen(b);
		for(i=0;i<m;i++)
		{
			if(m!=n)
			{
				
				break;
			}
			else if(a[i]==b[i])
			{
				count=count+0;
			}
			else
			{
				count=count+1;
			}
		}
	
	if(count==k)
	printf("yes");
	else
	printf("no");
	return 0;
}
