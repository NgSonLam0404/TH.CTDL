#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct THANHPHO {
	short int a;
	char tenThanhPho[30];
	float dienTich;
};
void nhapThongTin() {
	THANHPHO a;
	THANHPHO tenThanhPho;
	THANHPHO dienTich;
	cout<<"Hay nhap ma so cua thanh pho:"<<endl;
	cin>>a;
	while (a<=0) {
		cout<<"iD thanh pho la so duong, moi nhap lai"<<endl;
		cin>>a;
	}
	cout<<"Hay nhap ten thanh pho: "<<endl;
	cin>>tenThanhPho;
	cout<<"Hay nhap dien tich thanh pho: "<<endl;
	cin >>dienTich;
	while (S<=0) {
		cout<<" Dien tich phai la so thuc duong, ban da nhap sai, moi nhap lai"<<endl;
		cin>>dienTich;
	}
}
void xuatThongTin() {
	THANHPHO a;
	THANHPHO tenThanhPho;
	THANHPHO dienTich;
	cout<<"Ma so thanh pho la: "<< a <<endl;
	cout<<"Ten thanh pho la: "<<tenThanhPho<<endl;
	cout<<"Dien tich thanh pho la: "<<dienTich<<"km^2"<<endl;
}   
int main() {
	THANHPHO a;
	THANHPHO tenThanhPho;
	THANHPHO dienTich;
	nhapThongTin();
	xuatThongTin();
}