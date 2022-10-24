cout<<"\n====XUAT THONG TIN====\n";
		for(int i=0;i<n;i++){
			cout<<"\nNhan Vien-Can Bo thu: "<<i+1<<endl;
				DS[i]->xuat(); cout<<endl;
		cout<<"Tinh Luong: " <<DS[i]->TinhLuong()<<endl;
	}#include <iostream>
#include <stdlib.h>
using namespace std;

class Thi_Sinh
{
	protected:
		char HoTen[30];
		float dtb;
		float anh;
	public:
		Thi_Sinh() {  }
		~Thi_Sinh() {  }
		void nhap()
		{
			cout <<"Nhap vao ho ten: ";
			fflush(stdin);
