#include<iostream>
using namespace std;
class sinhvien
{
 	char ten[50];
 	int ma;
 	float diemtb;
 	public:
 		sinhvien()
 		{		
		}
		~sinhvien()
		{
		}
		void nhap();
		void xuat();
		char getten()
		{
			return ten[50];
		}
		int getma()
		{
			return ma; 
		}
		float getdiem()
		{
			return diemtb;
		}
};
void sinhvien::nhap()
{
	cout<<"Nhap ten: ";fflush(stdin);cin.get(ten,50);
	cout<<"Nhap ma: ";cin>>ma;
	cout<<"Nhap diem trung binh: ";cin>>diemtb;
}
void sinhvien::xuat()
{
	cout<<"Ten: "<<ten<<endl;
	cout<<"Ma: "<<ma<<endl;
	cout<<"Diem trung binh: "<<diemtb<<endl;
}
int main()
{
	sinhvien a[255];
	int n;
	cout<<"Nhap vao so luong sinh vien: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		a[i].nhap();
	}
	cout<<"Danh sach sinh vien: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
	}
	float max=0;
	int i,k=0;
	for(i=0;i<n;i++)
	{
		if(a[i].getdiem()>max)
		{
			max=a[i].getdiem();
		}
	}
	for(i=0;i<n;i++)
	{
		k++;
		if(max=a[i].getdiem());
		{
			break;
		}
	}
	cout<<"Sinh vien co diem trung binh cao nhat la: "<<endl;
	a[k+1].xuat();
	for(i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j].getten()>a[j+1].getten())
			{
				sinhvien temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			else
			if(a[j].getten()==a[j+1].getten())
			{
				if(a[j].getma()>a[j+1].getma())
				{
					sinhvien temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
	}
	cout<<"Danh sach sinh vien sau khi sap xep: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
	}
}
