#include <stdio.h>

void hoanvi(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int partition(int a[], int low, int high) {
    int pivot = a[high]; 
    int left = low;
    int right = high - 1;
    while (true) {
        while (left <= right && a[left] < pivot) {
            left++;
        }
        while (right >= left && a[right] > pivot) {
            right--;
        }
        if (left >= right) {
            break;
        }
        hoanvi(a[left], a[right]);
        left++;
        right--;
    }
    hoanvi(a[left], a[high]);
    return left;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {12, 40, 21, 13, 10, 9, 8, 15, 14};
    int n = sizeof(a) / sizeof(a[0]);
    quickSort(a, 0, n - 1);
    printf("mang da sap xep la: \n");
    xuatMang(a, n);
    return 0;
}

