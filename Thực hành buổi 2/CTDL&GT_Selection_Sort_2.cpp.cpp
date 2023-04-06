#include<stdio.h>
void sxchon(int a[],int n){
	for (int i=0; i<n-1;i++){
		int temp;
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
int main() {
    int a[] = {6,2,7,4,9};
    int n = 5;
    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    sxchon(a, n);
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
