#include<stdio.h>
int timkiemnhiphan(int a[],int x,int n){
	int left=0,right=n-1,mid;
	do{
		mid=(left+right)/2;
		if (a[mid]==x) return mid;
		if (a[mid]>x) right=mid-1;
		if (a[mid]<x) left=mid+1;
	}while (left<= right);
	return -1;
}
int main() {
    int a[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(a) / sizeof(a[0]);
    int x = 10;

    int kq =timkiemnhiphan(a, x, n);

   if (kq == -1)
    printf("Khong tim thay\n");
else
    printf("Da tim thay tai vi tri %d\n", kq);


    return 0;
}

