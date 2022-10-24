#include<stdio.h>
#include<string.h>
#include<ctype.h>
void XoaKiTu(char s[],int k)
{
	
	unsigned int n=strlen(s);
	for(unsigned int i=k;i<n-1;i++)
		s[i]=s[i+1];
	s[n-1]='\0';
}
void XoaCach(char s[])
{
	unsigned int i=0;
	unsigned int n=strlen(s);
	while(i<n)
	{
		if(s[i]==' ' && s[i+1]==' ')
		{
			XoaKiTu(s,i);
			i--;
		}
		i++;
	}
	n=strlen(s);
	if(s[0]==' ')
		XoaKiTu(s,0);
	if(s[n-1]==' ')
		s[n-1]='\0';
		
}
void Hoa(char *s)
{
	for(unsigned int i=0;i<strlen(s);i++)
		if(s[i]!=' ')
			s[i]=tolower(s[i]);
	s[0]=toupper(s[0]);
	for(unsigned int i=0;i<strlen(s);i++)
		if(s[i]==' ')
			s[i+1]=toupper(s[i+1]);	
}
int main()
{
	char s[100];
	scanf("%[^\n]",s);
	XoaCach(s);
	Hoa(s);
	printf("%s",s);
}
