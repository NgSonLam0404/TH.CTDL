#include<stdio.h>
void nhapmang(int a[],int n)
{
	for(int i=0; i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("mang da sap xep giam dan");
		for(int i=0; i<n; i++)
		printf("  %d  ",a[i]);
}
int main()
{
	int a[500],n;
	printf("nhap so luong phan tu");
	scanf("%d",&n);
	nhapmang(a,n);
	xuatmang(a,n);
}
