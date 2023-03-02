#include <stdio.h>

#include <math.h>
#define MAX 500

int tongchan(int a[], int n)
{
	if(n==0)
	return 0;
	int s=tongchan(a,n-1);
	if(a[n-1]%2==0)  s+=a[n-1];
	return s;
}
int main()
{
	int a[500],n,s;
	do
	{
		printf("nhap so luong phan tu");
		scanf("%d",&n);
		if(n<=0||n>MAX)
		{
			printf("so luong phan tu phai >0");
		}
	}while (n<=0||n>MAX);
	for (int i=0; i<n ; i++)
	{
		printf("nhap a[%d]",i);
		scanf("%d",&a[i]);
	}	
	{
	for (int i=0; i<n;i++)
	{
		printf("%4d",a[i]);
	}	
}
	s=tongchan(a,n);
	printf("\nkq la %d ",s);
	return 0;
}	
	
