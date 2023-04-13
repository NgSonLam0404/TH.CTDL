#include <stdio.h>

int demSo(float a[],int n){
	int dem;
	if (n==0) dem=0;
	else {
		dem= demSo(a,n-1);
		if (a[n-1]>0){
			dem++;
		}
	} return dem;
}

int main() {
    float a[] = {-1.2, -2.4, -4,-5,-3.6, -4.8,- 5.0};
    int n = sizeof(a) / sizeof(a[0]);
    int count = demSo(a, n);
    printf("So luong gia tri duong trong mang la: %d", count);
    return 0;
}

