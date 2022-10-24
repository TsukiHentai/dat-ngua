#include<iostream>
using namespace std;

class NhanVien{
	protected:
		char HoTen[30];
		float HSL;
		float PhuCap;
	public:
		virtual void nhap();
		virtual void xuat();
		virtual float TinhLuong(){
			return (HSL*1310+PhuCap);
		}
		
		float get_HSL(){
			return HSL;
		}
};

void NhanVien::nhap(){
	cout<<"Nhap Ho Ten: "; fflush(stdin); gets(HoTen);
	cout<<"Nhap HSL: "; cin>>HSL;
	cout<<"Nhap Phu Cap: "; cin>>PhuCap;
}


void NhanVien::xuat(){
	cout<<"Nhap Ho Ten: "<<HoTen<<endl;
	cout<<"Nhap HSL: "<<HSL<<endl;
	cout<<"Nhap Phu Cap: "<<PhuCap<<endl;
}


class CanBo:public NhanVien{
	private:
		float HSChucVu;
	public:
		float LuongCanBo(){
			return ((HSL+HSChucVu)*1310+PhuCap);
		}
		void nhap();
		void xuat();
};

void CanBo::nhap(){
	NhanVien::nhap();
	cout<<"Nhap He So Chuc Vu: "; cin>>HSChucVu;
	
}

void CanBo::xuat(){
	NhanVien::xuat();
	cout<<"He So Chuc Chuc Vu: "<<HSChucVu<<endl;
}
int main(){
	NhanVien *DS[256];
	
	cout<<"Nhap So Luong Nhan Vien va Can Bo: ";
	int n; cin>>n;
	
	int chon;
	for(int i=0;i<n;i++){
		cout<<"\n====NHAP THONG TIN====\n";
		cout<<"\nChon 1-NhanVien ~ 2-CanBo:"; cin>>chon;
		if(chon==1){
			cout<<"Nhan Vien thu: "<<i+1<<endl;
			DS[i] = new NhanVien;
		}
		else if(chon==2){
			cout<<"Can Bo thu: "<<i+1<<endl;
			DS[i] = new CanBo;
		}
		else
			cout<<"Nhap sai roi!";
		DS[i]->nhap();
	
	}
	
	cout<<"\n====XUAT THONG TIN====\n";
		for(int i=0;i<n;i++){
			cout<<"\nNhan Vien-Can Bo thu: "<<i+1<<endl;
				DS[i]->xuat(); cout<<endl;
		cout<<"Tinh Luong: " <<DS[i]->TinhLuong()<<endl;
	}
	
	//SAP XEP DS TANG DAN THEO LUONG
	for(int i=0 ;i<n; i++){
		for(int j=i+1;i<n;i++){
			if(DS[i]->TinhLuong() > DS[j]->TinhLuong()){
				NhanVien*temp = DS[i];
						DS[i] = DS[j];
						DS[j] = temp;
			}
		}
	}
	
	cout<<"\n10% DANH SACH NHAN VIEN LUONG THAP NHAT VA CO HSL ?.0: ";
	int dem = 0; 
	for(int i = 0; i < n; i++) {
		if (DS[i]->get_HSL() < 3.0) {
			dem++;
			cout << "\nNhan vien thu " << i+1 << ":" << endl;
			DS[i]->xuat();
			cout << "Tinh Luong: " << DS[i]->TinhLuong() << endl;
		}
		if(dem > n/10)
			break;		
	}	
}
