
//nguon: https://freetuts.net/de-quy-long-nested-recursion-2959.html
#include <stdio.h>

int A(int m, int n){
  if (m == 0)
    return n + 1;
  else if (n == 0)
    return A(m - 1, 1);
  else
    return A(m - 1, A(m, n - 1));
}

int main() {
  int m, n;
  printf("nhap hai gia tri lan luot la: ");
 scanf("%d",&m);
 scanf("%d",&n);
  int kq = A(m, n);
  printf("Ket qua cuoi cung la: %d", kq);
  return 0;
}

