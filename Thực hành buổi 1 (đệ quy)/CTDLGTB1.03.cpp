#include<stdio.h>
long x(int n);
/*Vi?t hàm tính s? h?ng th? n c?a hai dãy sau:	
"X(0) = 1
Y(0) = 0
X(n) = x(n – 1) + y(n – 1) (n > 0)
Y(n) = 3 * x(n – 1) + 2 * y(n – 1) (n > 0)"	 */
long y(int n){
	if(n==0)
		return 0;
	if(n<0)
		return 0;
	return 3*x(n-1)+2*y(n-1);
}

long x(int n){
	if(n==0)
		return 1;
	if(n<0)
		return 0;
	return x(n-1)+y(n-1);
}

int main(){
	int n;
	printf("Nhap vao gia tri n ");
	scanf("%d",&n);
	printf(" x(n) = %d",x(n));
	printf("\ny(n) =%d",y(n));
	return 0;
}
