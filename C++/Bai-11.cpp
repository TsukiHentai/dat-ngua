#include<iostream>
#include<string.h>
using namespace std;

class ThiSinh{
	protected:
		char HoTen[30];
		int SBD;
		float Diem1,Diem2,Diem3;
	public:
		ThiSinh(){
			
		}
		void nhap();
		void xuat();
		
		float getDiem1(){
			return Diem1;
		}
		float getDiem2(){
			return Diem2;
		}
		float getDiem3(){
			return Diem3;
		}
		float TongDiem(){
			return Diem1+Diem2+Diem3;
	}
};

void ThiSinh::nhap(){
	cout<<"Nhap Ho Ten: "; fflush(stdin); gets(HoTen);
	cout<<"Nhap SBD: "; cin>>SBD;
	cout<<"Nhap Diem 1: "; cin>>Diem1;
	cout<<"Nhap Diem 2: "; cin>>Diem2;
	cout<<"Nhap Diem 3: "; cin>>Diem3;	
}

void ThiSinh::xuat(){
	cout<<"Ho Ten: "<<HoTen<<endl;
	cout<<"SBD: "<<SBD<<endl;
	cout<<"Diem 1: "<<Diem1<<endl;
	cout<<"Diem 2: "<<Diem2<<endl;
	cout<<"Diem 3: "<<Diem3<<endl;
}

class UuTien:public ThiSinh{
	private:
		float DiemUT;
	public:
		void nhap();
		void xuat();
		float getDiem1(){
			return Diem1;
		}
		float getDiem2(){
			return Diem2;
		}
		float getDiem3(){
			return Diem3;
		}
		float TongDiemCuaTS_UT(){
			return Diem1+Diem2+Diem3+DiemUT;
		}
};

void UuTien::nhap(){
	ThiSinh::nhap();
	cout<<"Nhap Diem Uu Tien: "; cin>>DiemUT;
}

void UuTien::xuat(){
	ThiSinh::xuat();
	cout<<"Diem Uu Tien: "<<DiemUT<<endl;
}

int main(){
	int n; 
	ThiSinh t[255];
	cout<<"Nhap So Luong Thi Sinh Thong Thuong: \n"; cin>>n;
	
	cout<<"\n========NHAP VAO THONG TIN CUA THI SINH THONG THUONG========\n";
	for(int i=0; i<n; i++){
		cout<<"Thi sinh thu: "<<i+1<<endl;
		t[i].nhap();
	}
	
	cout<<"\n========XUAT RA THONG TIN CUA THI SINH THONG THUONG========\n";
	for(int i=0; i<n; i++){
		cout<<"Thi sinh thu: "<<i+1<<endl;
		t[i].xuat();
		cout<<endl;
		cout<<"Tong Diem: "<<t[i].TongDiem()<<endl;
	}
	

	int m;
	UuTien u[255];
	cout<<"Nhap So Luong Thi Sinh Co Diem Uu Tien: \n";
	cin>>m;
	
	cout<<"\n========NHAP VAO THONG TIN CUA THI SINH CO DIEM UU TIEN========\n";
	for(int i=0;i<m;i++){
		cout<<"Thi sinh thu: "<<i+1<<endl;
		u[i].nhap();
	}
	
	cout<<"\n========XUAT RA THONG TIN CUA THI SINH CO DIEM UU TIEN========\n";
	for(int i=0;i<m;i++){
		cout<<"Thi sinh thu: "<<i+1<<endl;
		u[i].xuat();
		cout<<"Tong Diem: "<<u[i].TongDiemCuaTS_UT()<<endl;
	}
	
	cout<<"\n========DANH SACH THI SINH THI DO VA THI TRUOT CUA THI SINH THONG THUONG========\n";
	for(int i=0;i<n;i++){
		if(t[i].getDiem1() > 0 && t[i].getDiem2() > 0 && t[i].getDiem3() > 0 && t[i].TongDiem() > 15){
			cout<<"\nThi Sinh Thong Thuong Thi Do La: \n";
			t[i].xuat();
			cout<<"Tong Diem: "<<t[i].TongDiem()<<endl;
		}
	}
		
	for(int i=0;i<n;i++){
		 if((t[i].getDiem1() < 0 || t[i].getDiem2() < 0 || t[i].getDiem3() < 0) && t[i].TongDiem() < 15.0){
			cout<<"\nThi Sinh Thong Thuong Thi Truot La: \n";
			t[i].xuat();
			cout<<"Tong Diem: "<<t[i].TongDiem()<<endl;
		}
	}
		
	cout<<"\n========DANH SACH THI SINH THI DO VA THI TRUOT CUA THI SINH CO DIEM UU TIEN========\n";
	for(int i=0;i<m;i++){
		if(u[i].getDiem1() > 0 && u[i].getDiem2() > 0 && u[i].getDiem3() > 0 && u[i].TongDiemCuaTS_UT() > 15){
			cout<<"\nThi Sinh Thi Do Cua Diem Uu Tien La:\n";
				u[i].xuat();
			cout<<"Tong Diem: "<<u[i].TongDiemCuaTS_UT()<<endl;
		}
	}
	for(int i=0;i<m;i++)
	{
		if((u[i].getDiem1()<0||u[i].getDiem2()<0||u[i].getDiem3()<0)&&(u[i].TongDiemCuaTS_UT()<15.0))
		{
			cout<<"\nThi Sinh Thi Truot Cua Diem Uu Tien La:\n";
				u[i].xuat();
			cout<<"Tong Diem: "<<u[i].TongDiemCuaTS_UT()<<endl;
		}	
	}
}
