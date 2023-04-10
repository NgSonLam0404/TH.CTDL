#include <stdio.h>

int kiemtratoanam( float a[],int n){
	if(n==0) return 0;
	if (a[0]>=0) return 0;
	if (n==1 && a[0]<0) return 1;
	return kiemtratoanam(a+1,n-1);
}


int main() {
    float a[] = {-1.5, -2.3, -0.7, -4.2};
    int n = sizeof(a) / sizeof(a[0]);
    int kq=kiemtratoanam( a, n);
    if (kq==1) {
        printf("Mang thoa man tinh chat toan gia tri am");
    } else {
        printf("Mang khong thoa man tinh chat toan gia tri am");
    }
    return 0;
}

