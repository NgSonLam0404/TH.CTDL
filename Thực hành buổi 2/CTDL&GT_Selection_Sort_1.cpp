#include<stdio.h>
void sxchon(int a[],int n){
	for (int i=0; i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++)
		if (a[j]<a[min])
		min=j;
		else {
			temp = a[i];
    		a[i] = a[j];
    		a[j] = temp;
		}
	}
}
