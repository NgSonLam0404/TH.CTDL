https://freetuts.net/de-quy-da-tuyen-exponential-recursion-2958.html
M?t hàm du?c g?i là d? quy da tuy?n n?u m?i l?n g?i d? quy nó phát sinh ra kho?ng n l?n g?i d? quy khác. Thông thu?ng câu l?nh g?i d? quy du?c d?t trong các vòng l?p.
#include <stdio.h>
 
void dayNhiPhan(int i, int n, int *X)
{
    int val;// val là các giá tr? có th? gán cho các v? trí trong x
    for (val = 0; val < 2; val++) // val có th? nh?n hai giá tr? là 0 và 1
    {
        X[i] = val;
   
        if (i == (n-1)) // n?u i là ph?n t? cu?i c?a dãy
        {
            int j;
            for(j = 0; j < n; j ++) // thì tin ra nh? phân m?i tìm du?c
            {
                printf("%d",X[j]);
            }
            printf("\n");
        }
        else // n?u i chua ph?i là ph?n t? cu?i thì gán cho i sau là i+1.
        {
            dayNhiPhan(i+1, n, X); // g?i d? quy ti?p t?c th?c hi?n hàm
        }
    }
}
