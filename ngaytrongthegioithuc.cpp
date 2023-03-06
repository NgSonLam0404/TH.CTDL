#include <stdio.h>
#include <conio.h>
struct Ngay
{
	int d;
	int m;
	int y;
};
typedef Ngay NGAY;
void Nhap(NGAY &);
void Xuat(NGAY);
 
void Nhap(NGAY &ng)
{
	do
	{
		printf ("nhap ngay");
		scanf ("%d",&ng.d);
	}while (ng.d<=0||ng.d>32);	
	do
	{
		printf ("nhap thang");
		scanf ("%d",&ng.m);
	}while (ng.m<=0||ng.m>12);
	do
	{
		printf ("nhap nam");
		scanf ("%d",&ng.y);
	}while (ng.y<=0);
}
 void Xuat(NGAY ng){
 	printf("ngay hom nay la %d/%d/%d",ng.d,ng.m,ng.y);
 }
 int main()
 {
 	NGAY ng;
 	Nhap(ng);
 	Xuat(ng);
 	return 0;
 }
