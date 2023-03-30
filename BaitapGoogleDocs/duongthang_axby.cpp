#include<stdio.h>
struct DuongThang
{
	float a,b,c;
};
typedef DuongThang DTHANG;

void nhapHeSo(DTHANG &);
void xuatHeSo(DTHANG);

void nhapHeSo (DTHANG &dt)
{
	printf("nhap he so a b c");
	scanf("%f",&dt.a);
	scanf("%f",&dt.b);
	scanf("%f",&dt.c);
}
void xuatHeSo(DTHANG dt)
{
	printf("phuong trinh duong thang la\n");
	printf("%.2fx+%.2fy+%.2f=0",dt.a,dt.b,dt.c);
}
int main()
{
	DTHANG dt;
	nhapHeSo(dt);
	xuatHeSo(dt);
}

