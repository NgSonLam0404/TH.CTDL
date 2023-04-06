#include<stdio.h>

int fib(int n){
  if(n <= 2) return 1;
  return fib(n - 1) + fib(n - 2);
}
int main(){
	int ketqua,n;
	printf("nhap vao tri tri muon tim");
	scanf("%d",&n);
	ketqua=fib(n);
	printf("gia tri cua %d trong day fibonacy la %d:",n,ketqua);
}
 
