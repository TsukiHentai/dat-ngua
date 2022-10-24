#include<stdio.h>
#include<string.h>
int main()
{
	int a[256]; //0-255
	char s[100];
	scanf("%s",s);
	
	for(int i=0;i<256;i++) //Khoi Tao Gia Tri Ban dau
		a[i]=0;
	//S=ABCD S[0]='A' (int)S[0] =65
	for(unsigned int i=0;i<strlen(s);i++)
	{
		a[(int)s[i]]++;
		if(a[(int)s[i]]==1)
			printf("%c",s[i]);
		//AAABBBCCCA
	}
}
