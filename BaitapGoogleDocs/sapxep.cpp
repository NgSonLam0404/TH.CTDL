#include <stdio.h>

void hoanvi(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sapxep(int a[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] % 2 == 1 && a[j] % 2 == 1) {
                if (a[i] > a[j]) {
                    hoanvi(&a[i], &a[j]);
                }
            }
        }
    }
}

void inmang(int a[], int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("]\n");
}

int main() {
    int a[100];
    int size = 0;
    int num;

    do {
        printf("Nhap vao mot so nguyen (nhap 0 de dung lai): ");
        scanf("%d", &num);
        if (num != 0) {
            a[size] = num;
            size++;
        }
    } while (num != 0);

    printf("Mang ban vua nhap: ");
    inmang(a, size);

    sapxep(a, size);

    printf("Mang sau khi sap xep cac so le: ");
    inmang(a, size);
}

