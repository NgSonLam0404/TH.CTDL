#include <stdio.h>

int tinhtong(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + tinhtong(n - 1);
    }
}

int main() {
    int n = 5;
    int result = tinhtong(n);
    printf("tong cua tu %d den 1 la: %d\n", n, result);
    return 0;
}

