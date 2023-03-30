#include<stdio.h>
#include<conio.h>
long GiaiThua(int n)
{
	if (n==0)
	return 1;
	return GiaiThua(n-1)*n;
}
int main ()
{
	int n, kq;
	printf("nhap so can tinh giai thua\n");
	scanf("%d",&n);
	kq=GiaiThua(n);
	printf("ket qua la: %d", kq);
}
