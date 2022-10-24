#include<iostream>
#include<stdbool.h>
using namespace std;

class ThiSinh{
	protected:
		char HoTen[30];
		float DiemTB;
		float DiemTA;
	
	public: 
		void nhap();
		void xuat();
		bool XetTuyen(){
			if(DiemTB>=7.0 && DiemTA>=400)
				return true;
			else
				return false;
		}
};

class ThiSinhUT:public ThiSinh{
		float DiemUT;	
	public:
		void nhap();
		void xuat();
		bool XetTuyen(){
			if((DiemTB+DiemUT)>=7.0 && DiemTA>=400)
				return true;
			else
				return false;
		}
};

void ThiSinh::nhap(){
	cout<<"Nhap Ho Ten: "; fflush(stdin); gets(HoTen);
	cout<<"Nhap Diem TB: "; cin>>DiemTB;
	cout<<"Nhap Diem TA:"; cin>>DiemTA;
}

void ThiSinh::xuat(){
	cout<<"Nhap Ho Ten: "<<HoTen<<endl;
	cout<<"Nhap Diem TB: "<<DiemTB<<endl;
	cout<<"Nhap Diem TA:"<<DiemTA<<endl;
}

	
void ThiSinhUT::nhap(){
	ThiSinh::nhap();
	cout<<"Nhap Diem UT: "; cin>>DiemUT;
}

void ThiSinhUT::xuat(){
	ThiSinh::xuat();
	cout<<"Diem UT: "<<DiemUT<<endl;
}


int main(){
	ThiSinh*TS[255];
	cout<<"Nhap So Luong Thi Sinh thuong va Thi Sinh Uu Tien: ";
	int n; cin>>n;
	
	int chon;
	for(int i=0;i<n;i++){
		cout<<"\n====NHAP THONG TIN====\n";
		cout<<"\nChon 1-ThiSinh_tt ~ 2-ThiSinh Uu Tien:"; cin>>chon;
		if(chon==1){
			cout<<"Thi Sinh_Thuong thu: "<<i+1<<endl;
			TS[i] = new ThiSinh;
		}
		else if(chon==2){
			cout<<"Thi Sinh_Uu Tien thu: "<<i+1<<endl;
			TS[i] = new ThiSinhUT;
		}
		else
			cout<<"Nhap sai roi!";
		TS[i]->nhap();
	}
	cout<<"\n====XUAT THONG TIN====\n";
		for(int i=0;i<n;i++){
			cout<<"\nThiSinh_TT - ThiSinh_UT: "<<i+1<<endl;
				TS[i]->xuat(); cout<<endl;
	}
	cout<<"Danh Sach Thi Sinh Trung Tuyen Khong Qua 30%: ";
	int dem=0;
	for(int i=0;i<n;i++){
		if(TS[i]->XetTuyen()==true){
			dem++;
			cout<<"Thi Sinh thu: "<<i+1<<endl;
			TS[i]->xuat();
		}
		if(dem>n/(30))
			break;
	}

}
