#include<stdio.h>
	
int demso(int a[],int n)
{
	if (n==0)
	return 0;
	int solan=demso(a,n-1);
	if(a[n-1]>0)
		solan+=1;
		return solan;
}		
int main()
{
	int a[100];
	int n,i;
	do
	{
		printf("nhap so luong phan tu");
		scanf("%d",&n);
		if (n<=0|| n>100)
			printf("nhap lai");
	}while (n<=0||n>100);
	for (int i=0; i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	int dem=demso(a,n);
	printf("so phan tu duong la :%d",dem);
	return 0;
}
