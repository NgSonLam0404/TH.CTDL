#include <stdio.h> 
void hoanvi(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}

void heapify(int a[],int n,int i){
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if (left<n && a[left]>a[largest]){
		largest=left;
	}
	if(right<n && a[right]>a[largest]){
		largest=right;
	}if (largest !=i){
	
	hoanvi (a[i],a[largest]);
	heapify(a,n,largest);}
}

void heapsort(int a[],int n){
	for (int i=n/2-1;i>=0;i--){
		heapify(a,n,i);
	}
	for (int j=n-1;j>=0;j--){
		hoanvi(a[0],a[j]);
		heapify(a,j,0);
	}
}
void xuatMang(int a[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        printf("%d ", a[i]); 
    printf("\n"); 
} 
  
int main() 
{ 
    int a[] = {12, 11, 13, 5, 6, 7}; 
    int n = sizeof(a) / sizeof(a[0]); 
  printf("mang ban dau la:");
  xuatMang(a,n);
  printf("bat dau sap xep");
    heapsort(a, n); 
  
    printf("mang :\n"); 
    xuatMang(a, n); 
} 

