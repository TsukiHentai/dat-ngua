#include<stdio.h>
#include<conio.h>
#include<string.h>
int kiemtra(char *p,char s,int n)
{
     int j=0;
     for(int i=0;i<=n;i++)
     if(s==p[i]) j++;  
     if(j==1)return 1;
     return 0;  
}
int dem(char *p,char s,int i)
{
   int dem=0;
   for (int j=i;j<strlen(p);j++)
   {
       if(s==p[j]) dem++;
   }
   return dem;
}
int main ()
{
    char st[255];
    printf("Nhap vao chuoi:");
    gets(st);
    for(int i=0;i<strlen(st);i++)
    {
       if((st[i]!=' ')&&(kiemtra(st,st[i],i)))
       printf("ki tu %c co %d lan xuat hien\n",st[i],dem(st,st[i],i));
    }
getch();
}
