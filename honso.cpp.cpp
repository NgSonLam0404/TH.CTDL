#include <iostream>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Phanso{
	int tuSo, mauSo;
};
struct Honso{
	int soNguyen;
	Phanso ps;
};
void nhapPhanSo (Phanso &ps)
{
	printf("nhap vao tu so:");
	scanf ("%d", &ps.tuSo);
	do
	{
		printf("nhap mau so:");
		scanf("%d",&ps.mauSo);
		if (ps.mauSo==0)
		{
			printf("nhap mau so khac 0");
		}
	}while (ps.mauSo==0);	
}
void xuatPhanSo (Phanso ps)
{
	printf("%d/%d",ps.tuSo,ps.mauSo);
}
void nhapHonSo(Honso &hs)
{
	printf("nhap so nguyen");
	scanf("%d",&hs.soNguyen);
	nhapPhanSo(hs.ps);
}
void xuatHonSo(Honso hs)
{
	printf("hon so la %d  ", hs.soNguyen);
	xuatPhanSo(hs.ps);
}
int main(int argc, char** argv) {
	Honso hs;
	Phanso ps;
	nhapHonSo(hs);
	xuatHonSo(hs);
	return 0;
}
