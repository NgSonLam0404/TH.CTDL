#include<stdio.h>
//nguon:https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-chen-truc-tiep-insertion-sort
void sxchentructiep(int a[], int n) {
    int pos, x;
    for (int i = 1; i < n; i++) {
        x = a[i];
        pos = i - 1;
        while (pos >= 0 && a[pos] > x) {
            a[pos + 1] = a[pos];
           pos--;
        }
        a[pos + 1] = x;
    }
}

int main() {
    int a[] = {6,2,7,4,9};
    int n = 5;
    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    sxchentructiep(a, n);
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
