#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int Fibo(int n) 
{
 if ( n < 2 ) 
	return 1 ; 
else 
	return (Fibo(n -1) + Fibo(n -2)) ; 
} 
int main() {
	int n;
	printf(" nhap gia tri n");
	scanf("%d",&n);
	printf(" vay gia tri cua n trong fibonani la %d", Fibo(n));
}
