#include<stdio.h>

// h�m t�m ki?m nh? ph�n, tr? v? v? tr� c?a ph?n t? n?u t�m th?y, -1 n?u kh�ng t�m th?y
int timkiemnhiphan(int a[], int n, int x)
{
    int left = 0, right = n - 1, mid;
    do
    {
        mid = (left + right) / 2;
        if (x == a[mid]) return mid;
        else if (x < a[mid]) right = mid - 1;
        else left = mid + 1;
    } while (left <= right);
    return -1;
}

int main() 
{
    int a[] = {2, 3, 4, 10, 40};
    int n = 5;
    int x = 10;
    int giatri = timkiemnhiphan(a, n, x);

    if (giatri != -1)
        printf("Phan tu %d nam tai vi tri %d", x, giatri);
    else 
        printf("Phan tu %d khong ton tai trong mang", x);

    return 0;
}

