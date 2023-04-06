https://freetuts.net/de-quy-da-tuyen-exponential-recursion-2958.html
M?t h�m du?c g?i l� d? quy da tuy?n n?u m?i l?n g?i d? quy n� ph�t sinh ra kho?ng n l?n g?i d? quy kh�c. Th�ng thu?ng c�u l?nh g?i d? quy du?c d?t trong c�c v�ng l?p.
#include <stdio.h>
 
void dayNhiPhan(int i, int n, int *X)
{
    int val;// val l� c�c gi� tr? c� th? g�n cho c�c v? tr� trong x
    for (val = 0; val < 2; val++) // val c� th? nh?n hai gi� tr? l� 0 v� 1
    {
        X[i] = val;
   
        if (i == (n-1)) // n?u i l� ph?n t? cu?i c?a d�y
        {
            int j;
            for(j = 0; j < n; j ++) // th� tin ra nh? ph�n m?i t�m du?c
            {
                printf("%d",X[j]);
            }
            printf("\n");
        }
        else // n?u i chua ph?i l� ph?n t? cu?i th� g�n cho i sau l� i+1.
        {
            dayNhiPhan(i+1, n, X); // g?i d? quy ti?p t?c th?c hi?n h�m
        }
    }
}
