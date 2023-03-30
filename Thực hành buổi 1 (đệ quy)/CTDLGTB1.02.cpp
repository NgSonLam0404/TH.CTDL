#include<stdio.h>
#include<math.h>
//Vi?t hàm d? quy tính t?ng c?a bi?u th?c sau dây: S(x, n) = x + x^2/2! + x^3/3! + … + x^n/n!				
int giaiThua(int n){
    if(n==0 || n==1)
    return 1; 
    return n*giaiThua(n-1);
}

double  tinhS(double x, int n){
	if(n==1)
	  return x;
    if (n==0)
    return 1;
	return (pow(x,n) / giaiThua(n)) +tinhS(x,n-1);
	    
}
int main(){
	double x , s;
	int n;
	printf(" nhap x :");
	scanf("%lf", &x);
	printf("nhap n  :");
	scanf("%d", &n);
	s=tinhS(x,n);
	printf(" tong la:%f",s);
}
