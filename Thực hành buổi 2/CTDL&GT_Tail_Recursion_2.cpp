#include<stdio.h>
int tinhtong_dqduoi(int n, int acc) {
    if (n == 0) {
        return acc;
    } else {
        return tinhtong_dqduoi(n - 1, acc + n);
    }
}
int main(){
	int n; 
	int ketqua;
	int acc;
	
	printf("nhap n");
	scanf("%d",&n);
	printf("ban muon tong ban dau bang bao nhieu");
	scanf ("%d",&acc);
	ketqua=tinhtong_dqduoi(n,acc);
	printf("tong ca so tu 1 toi %d la: %d",n,ketqua);
}

