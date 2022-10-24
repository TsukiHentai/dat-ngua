#include<iostream>
using namespace std;
class the
{
	protected:
		int ma;
		int songay;
		int phimuon;
	public:
		the()
		{
		}
		virtual void nhap();
		virtual void xuat();
		int getsongay()
		{
			return songay;
		}
		int tinhphi()
		{
			return songay*phimuon;
		}
};
void the::nhap()
{
	cout<<"Nhap ma the: ";cin>>ma;
	cout<<"Nhap so ngay muon: ";cin>>songay;
	cout<<"Nhap phi muon: ";cin>>phimuon;
}
void the::xuat()
{
	cout<<"Ma the: "<<ma<<endl;
	cout<<"So ngay muon: "<<songay<<endl;
	cout<<"Phi muon: "<<phimuon<<endl;
}
class theut:public the
{
	float tile;
	public:
		void nhap();
		void xuat();
		float tinhphi()
		{
			return songay*phimuon*(1-tile);
		}
};
void theut::nhap()
{
	the::nhap();
	cout<<"Nhap ti le giam gia: ";
	cin>>tile;
}
void theut::xuat()
{
	the::xuat();
	cout<<"Ti le giam gia: "<<tile<<endl;
	cout<<"hahahahaah";
}
int main()
{
	the* a[256];
	int n;
	cout<<"Nhap so luong the: ";
	cin>>n;
	int chon;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap: 1.The thuong-2.The uu tien: ";
		cin>>chon;
		if(chon==1)
			a[i]=new the;
		if(chon==2)
			a[i]=new theut;
		if(chon!=1&&chon!=2)
		{
			cout<<"Nhap sai!";
			break;
		}
		a[i]->nhap();
	}
	cout<<"Danh sach the: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i]->xuat();
	}
	int dem=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]->tinhphi()<a[j]->tinhphi())
			{
				the*temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Danh sach the sau khi loc: "<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]->getsongay()>10&&dem<(n*0.1))
		{
			a[i]->xuat();
			dem++;
		}
	}
}
