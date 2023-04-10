#include<stdio.h>
void hoanvi(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void sapxepchontructiep(int a[],int n){
	for (int i=0;i<n-1;i++){
		int min=i;
		for (int j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		hoanvi(a[i],a[min]);
	}
}
int main() {
    int a[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(a) / sizeof(a[0]);

    sapxepchontructiep(a, n);

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

