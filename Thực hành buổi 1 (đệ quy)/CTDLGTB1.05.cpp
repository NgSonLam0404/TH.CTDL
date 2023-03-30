#include <stdio.h>
//nhap vao mang mot chieu, viet ham dem cac so duong trong mang bang de quy
void nhapMang(int a[],int n){
	for (int i=0;i<n;i++){
		printf("nhap phan tu a[%d]=\n",i);
		scanf("%d",&a[i]);
		}
}
void xuatMang(int a[], int n) {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int demSoDuong(int a[], int n) {
    if (n == 0) {
        return 0;
    }
    int dem = demSoDuong(a, n - 1);
    if (a[n - 1] > 0) {
        dem++;
    }
    return dem;
}
int main(){
	int n; int dem;
	int a[100];
	printf ("nhap vao so phan tu muon dung");
	scanf("%d",&n);
	nhapMang(a,n);
	xuatMang(a,n);
	dem=demSoDuong(a,n);	
	if(dem!=0 ){
		printf("trong mang co %d so duong", dem);
	}else{
		printf("trong mang khong co so duong");
	}
}
