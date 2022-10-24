#include<iostream>
using namespace std;
class thisinh
{
	protected:
	char hoten[50];
	float diemtb;
	float diemta;
	public:
		void nhap();
		void xuat();
		bool xettuyen()
		{
			if(diemtb>=7.0&&diemta>=400)
			return true;
			else return false;
		}	
};
class thisinhut:public thisinh
{
	float diemut;
	public:
		void nhap();
		void xuat();
		bool xettuyen()
		{
			if((diemtb+diemut)>=7.0&&diemta>=400)
			return true;
			else return false;
		}
};
void thisinh::nhap()
{
	cout<<"Nhap ten: ";fflush(stdin);gets(hoten);
	cout<<"Nhap diem trung binh: ";cin>>diemtb;
	cout<<"Nhap diem tieng anh: ";cin>>diemta;
}
void thisinh::xuat()
{
	cout<<"Ten: "<<hoten<<endl;
	cout<<"Diem trung binh: "<<diemtb<<endl;
	cout<<"Diem tieng anh: "<<diemta<<endl;
}
void thisinhut::nhap()
{
	thisinh::nhap();
	cout<<"Nhap diem uu tien: ";cin>>diemut;
}
void thisinhut::xuat()
{
	thisinh::xuat();
	cout<<"Diem uu tien: ";cin>>diemut;
}
int main()
{
	thisinh *DS[100];
	cout<<"Nhap so luong thi sinh: ";
	int n;
	cin>>n;
	int chon;
	for(int i=0;i<n;i++)
	{
		cout<<"\n====NHAP THONG TIN====\n";
		cout<<"\nChon 1-ThiSinhThuong ~ 2-ThiSinhUT:"; cin>>chon;
		if(chon==1){
			cout<<"Sinh vien thu: "<<i+1<<endl;
			DS[i] = new thisinh;
		}
		else if(chon==2){
			cout<<"Sinh vien uu tien thu: "<<i+1<<endl;
			DS[i] = new thisinhut;
		}
		else
			cout<<"Nhap sai roi!";
		DS[i]->nhap();
	}
	cout<<"\n====XUAT THONG TIN====\n";
	for(int i=0;i<n;i++)
	{	
		cout<<"\nThi Sinh-Thi Sinh Uu Tien thu: "<<i+1<<endl;
		DS[i]->xuat(); cout<<endl;
	}
	cout<<"Danh sach thi sinh trung tuyen khong vuot qua 30%: "<<endl;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(DS[i]->xettuyen()==true)
		{
			dem++;
			cout<<"Thi sinh thu: "<<i+1<<endl;
			DS[i]->xuat();
		}
		if(dem>n/30)
		break;
	}
	return 0;
}
