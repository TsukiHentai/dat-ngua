#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class vandongvien
{
	string hoten;
	int tuoi;
	string monthidau;
	float cannang;
	float chieucao;
	public:
	vandongvien()
	{
		hoten="";
		tuoi=0;
		monthidau="";
		cannang=0;
		chieucao=0;
}
	vandongvien(string hoten, int tuoi,string monthidau, float cannang, float chieucao)
	{
		this->hoten=hoten;
		this->tuoi=tuoi;
		this->monthidau=monthidau;
		this->cannang=cannang;
		this->chieucao=chieucao;
	}
	~vandongvien()
	{
	}
	friend istream& operator>>(istream&is,vandongvien&a);
	friend ostream& operator<<(ostream&os,vandongvien a);
	int operator>(const vandongvien &a);
};
istream& operator>>(istream&is,vandongvien&a)
{
	cout<<"Nhap vao ten: ";
	fflush(stdin);
	getline(is,a.hoten);
	cout<<"Nhap vao tuoi: ";
	is>>a.tuoi;
	cout<<"Nhap vao mon thi dau: ";
	fflush(stdin);
	getline(is,a.monthidau);
	cout<<"Nhap vao can nang: ";
	is>>a.cannang;
	cout<<"Nhap vao chieu cao: ";
	is>>a.chieucao;
}
ostream& operator<<(ostream&os,vandongvien a)
{
	cout<<"ten: ";
	os<<a.hoten<<" - ";
	cout<<"tuoi: ";
	os<<a.tuoi<<" - ";
	cout<<"mon thi dau: ";
	os<<a.monthidau<<" - ";
	cout<<"can nang: ";
	os<<a.cannang<<" - ";
	cout<<"chieu cao: ";
	os<<a.chieucao<<endl;
}
int vandongvien::operator>(const vandongvien &a)
{
	if(chieucao==a.chieucao)
	{
		if(cannang>a.cannang)
		return 1;
	else 
		return 0;	
	}
	else
	{
		if(chieucao>a.chieucao)
		return 1;
	else 
		return 0;	
	}
}
int main()
{
//	vandongvien p;
//	vandongvien q;
//	cin>>p;
//	cout<<p;
//	cin>>q;
//	cout<<q;
//	if(p>q==1)
//	{
//		cout<<"Thang p lon hon thang q !";
//	}
//	else
//	cout<<"P nho hon q";
	vandongvien l[100];
	int n;
	cout<<"Nhap vao so luong van dong vien can them: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>l[i];
	}
	cout<<"Danh sach van dong vien: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<l[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if(l[i]>l[i+1]==1)
		{
			vandongvien temp=l[i];
			l[i]=l[i+1];
			l[i+1]=temp;
		}
	}
	cout<<"Danh sach van dong vien sau khi sap xep: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<l[i];
	}
	return 0;
}
