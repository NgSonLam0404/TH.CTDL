#include <stdio.h>
//nhap vao mang mot chieu, viet ham tinh tong cac so chan trong mang bang de quy
int nhapmang(int a[]) {
    int n = 0;
    while (1) {
        printf("Nhap phan tu thu %d (nhap -1 de ket thuc): ",n+1); 
        scanf("%d", &a[n]);
        if (a[n] == -1) {
            break; 
        }
        n++;
    }
    return n;
}


void xuatMang(int a[], int n) {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int tongSoChan(int a[], int n) {
    if (n == 0) {
        return 0;
    } else {
        int tong = tongSoChan(a, n-1);
        if (a[n-1] % 2 == 0) {
            tong += a[n-1];
        }
        return tong;
    }
}

int main() {
    int n;
    
    
    int a[100]; 
   n= nhapmang(a);
    xuatMang(a, n); 

    int tong = tongSoChan(a, n);
    printf("Tong cac so chan trong mang la: %d", tong);

    return 0;
}


