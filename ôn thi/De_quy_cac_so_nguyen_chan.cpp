#include <stdio.h>

int tongMang(int a[],int n){
	int sum;
	if (n==0){
	 sum=0;
	}else{
		 sum=tongMang(a,n-1);
		if(a[n-1]%2==0){
			sum+=a[n-1];
		}
	}
	return sum;
}
int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int sum = tongMang(a, n);
    printf("Tong cac so chan trong mang la: %d", sum);
    return 0;
}

