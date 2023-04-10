#include<stdio.h>
int tongChan(int a[],int n){
	int sum;
	if(n==0) sum=0;
	else{
		sum=tongChan(a,n-1);
		if(a[n-1]%2==0){
			sum+=a[n-1];
		}
	}
	return sum;
}
int demSoThuc(float b[],int m){
	int dem;
	if(m==0) dem=0;
	else{
		dem=demSoThuc(b,m-1);
		if (b[m-1]>0){
			dem=dem+1;
		}
	}
	return dem;
}
void xuatMang(int a[],int n){
	if(n==0) return;
	else {
		xuatMang(a,n-1);
		printf(" %d  ",a[n-1]);
		
	}
}
float tongDuong(float b[],int m){
	float sumfloat;
	if(m==0) sumfloat=0;
	else{
		sumfloat=tongDuong(b,m-1);
		if(b[m-1]>0){
			sumfloat+=b[m-1];
		}
	} 
	return sumfloat;
}
float tongSoThuc(float b[],int m){
	float sumSothuc=0;
	if (m==0) sumSothuc=0;
	else {
		sumSothuc=tongSoThuc(b,m-1);
		sumSothuc+=b[m-1];
	}
	return sumSothuc ;
}
int kiemtraToanAm(float b[],int m){
	if (m==0) return 0;
	if (b[0]>=0) return 0;
	if (m==1 && b[0]<0) return 1;
	kiemtraToanAm(b+1,m-1);
}
float timphantulonnhat(float b[],int m){
	if(m==1) return b[0];
	else{
		int max=timphantulonnhat(b,m-1);
		if(max<b[m-1]){
			max=b[m-1];
		}
		return max;
	}
}
void sapxepmangtangdan(float b[],int m){
	if (m==0) return;
	for (int i=0;i<m-1;i++){
		for(int j=i+1;j<m;j++){
			if (b[i]>b[j]){
				float temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	sapxepmangtangdan(b,m-1);
}
void xuatMangThuc(float b[],int m){
	if(m==0) return;
	else{
		xuatMangThuc(b,m-1);
		printf("%f  ",b[m-1]);
	}
}
int tinhgiaithua(int so){
	if(so==1) return 1;
	else{
		return so*tinhgiaithua(so-1);
	}
}
int main(){
	int a[]={1,2,3,4,5,6,7,8,10};
	int n=sizeof(a)/sizeof(a[0]);
	int kq=tongChan(a,n);
	printf("tong cac so chan la %d \n",kq);
	printf("xuat mang la");
	xuatMang(a,n);
	printf("\n");
	float b[]={-4.5,-6.2,-3.2,-7.9,-9.8,-7.3,10};
	int m=sizeof(b)/sizeof(b[0]);
	int dem=demSoThuc(b,m);
	printf("cac so thuc duong trong mang b la :%d \n ",dem);
	float sumfloat=tongDuong(b,m);
	printf(" tong cac gia tri duong: %f \n",sumfloat);
	float sumSothuc=tongSoThuc(b,m);
	printf("tong so thuc trong mang la: %f \n",sumSothuc);
	int check=kiemtraToanAm(b,m);
	if (check==0) printf(" mang khong phai toan am\n");
	if (check==1) printf("mang toan am\n");
	float checkMax=timphantulonnhat(b,m);
	printf("phan tu lon nhat trong mang la: %f \n",checkMax);
	sapxepmangtangdan(b,m);
	xuatMangThuc(b,m);
	int so;
	printf("nhap so can tinh giai thua");
	scanf("%d",&so);
	int giaithua=tinhgiaithua(so);
	printf("giai thua cua so da nhap la %d  ",giaithua);
}
