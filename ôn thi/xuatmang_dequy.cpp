#include <stdio.h>

void xuatMang(int a[], int n) {
    if (n == 0) {
        return;
    }else{
	
    xuatMang(a, n - 1);
    printf("%d ", a[n - 1]);}
}
void sapXepTangDan(int a[], int n) {
    if (n == 1) {
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j=i+1;j<n;j++){
		if (a[i] > a[j]) {
            float temp = a[i];
            a[i] = a[j];
            a[j] = temp;}
        }
    }
    sapXepTangDan(a, n - 1);
}

int main() {
    int a[] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(a) / sizeof(a[0]);
    xuatMang(a, n);
    printf("sap xep lai\n");
    sapXepTangDan(a,n);
   	xuatMang(a,n);
    return 0;
}

