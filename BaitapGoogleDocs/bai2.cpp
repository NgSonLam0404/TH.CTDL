#include<stdio.h>
// nhap vao mot mang( nhap 0 thi dung), sap xep mang theo thu tu tang dan
int main()
{
	int dem;
	int a[200];
	int i;
	bool value=true;
	for (i=0; value  ;i++ )
	{
		printf("nhap phan tu a[%d]",i);
		scanf("%d",&a[i]);
		if (a[i]==0)
		{
			printf("ket thuc nhap, tong so phan tu la %d \n",i);
			value=false;
		}
	}dem=i;
		for (int i=0; i<dem; i++)
	{
		for (int j=i+1;j<dem;j++)
		{
			if (a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	} 
	printf ("mang da sap xep la");
		for(int i=0;i<dem;i++)
		printf(" %d ",a[i]);
}	
