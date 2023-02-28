#include <iostream>
#include <math.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Xn(int n){
	if(n==0){
		return 1;
	} else {
		int tg=0;
		for (int i=0;i<n;i++){
			tg=tg+(n-i)*(n-i)*Xn(i);
			return (tg);
		}
	}

}

int main(int argc, char** argv) {
	int n;
	printf(" nhap n");
	scanf("%d",&n);
	Xn(n);
	printf("vay X la: %d",Xn(n));
	return 0;
}