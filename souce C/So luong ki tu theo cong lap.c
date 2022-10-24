#include<stdio.h>
#include<string.h>
long Dodaichuoi(const char* chuoi);
main()
{
	char Chuoi[]="Hello fucking man";
	long Dodai=0;
	Dodai=Dodaichuoi(Chuoi);
	printf("Chuoi  %s  co do dai la: %ld",Chuoi,Dodai);
	return 0;
}
long Dodaichuoi(const char* chuoi)
{
	long Soluongkitu = 0;
	char Kituhientai = 0;
	do
	{
		Kituhientai = chuoi[Soluongkitu];
		Soluongkitu++;
	}
	while(Kituhientai != '\0');
	Soluongkitu--;
	return Soluongkitu;
}
