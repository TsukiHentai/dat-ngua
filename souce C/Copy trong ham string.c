#include<stdio.h>
#include<string.h>
main()
{
	char chuoi[]="Hello man", copy[100]={0};
	strcpy(copy, chuoi);
	printf("Chuoi la: %s\n",chuoi);
	printf("Copy la: %s\n",copy);
}
