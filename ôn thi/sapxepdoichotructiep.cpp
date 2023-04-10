#include <stdio.h>

void sapxepdoichotructiep(int a[], int n){
	for (int i=0; i<n-1;i++){
		for (int j=i+1; j<n;j++){
			if (a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

int main() {
    int a[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(a) / sizeof(a[0]);

    sapxepdoichotructiep(a, n);

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

