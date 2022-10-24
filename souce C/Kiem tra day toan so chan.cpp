//Kiem tra n toan so chan hay ko 
#include<stdio.h>
int main() 
{
	int n,c=0,b=0;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	 while(n>0)
	 {
	 	c=n%10;
	 	b++;
	 	if(c%2==1)
	 	{
	 		b--;
	 		break;
		 }
	 	n=n/10;
	 }
	 if(b==1) printf("Day khong toan so chan");
	 else printf("Day toan chan");
}
