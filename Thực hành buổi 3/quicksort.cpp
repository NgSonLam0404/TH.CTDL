#include <stdio.h>

void hoanvi(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

int partition(int a[],int low,int hight){
	int pivot=a[hight];
	int left=low;
	int right=hight-1;
	while (true){
		while (left<=right && a[left]>pivot){
			left++;
		}
		while (right>=left && a[right]<pivot){
			right--;
		}
		if (left>=right){
			break;
		}
		hoanvi(a[left],a[right]);
		left++;
		right--;
	}
	hoanvi(a[left],a[hight]);
	return left;
}

void quicksort(int a[],int low,int hight){
	if (low <hight){
		int pi=partition(a,low,hight);
		quicksort(a,low,pi-1);
		quicksort(a,pi+1,hight);
	}
}
void xuatMang(int a[], int n) {
    if (n==0)
    return;
    else{
    	printf("%d\t",a[n-1]);
    	xuatMang(a,n-1);
	}
}

int main(){
	int a[]={41,23,15,7,33,45,65};
	int n=sizeof(a)/sizeof(a[0]);
	quicksort(a,0,n-1);
	xuatMang(a,n);
}


