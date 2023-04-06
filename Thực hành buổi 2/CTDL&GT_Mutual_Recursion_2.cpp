#include <stdio.h>

int isEven(int n);
int isOdd(int n);

int isEven(int n){
  if(n == 0)
    return 1;
  else
    return isOdd(n - 1);
}

int isOdd(int n){
  return !isEven(n);
}

int main() {
  
  int n;
  printf("nhap voa so ban can kiem tra");
  scanf("%d",&n);
  int kq = isEven(n);
  if(kq == 1)
    printf("%d la so chan", n);
  else 
    printf("%d la so le", n);
  return 0;
}

