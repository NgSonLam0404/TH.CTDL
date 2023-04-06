#include<stdio.h>

void sxdoichoitructiep(int a[],int n){
	int temp;
	for (int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
			temp = a[i];
    		a[i] = a[j];
    		a[j] = temp;}
		}
	}
}
int main() {
    int a[] = {6,2,7,4,9};
    int n = 5;
    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    sxdoichoitructiep(a, n);
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
