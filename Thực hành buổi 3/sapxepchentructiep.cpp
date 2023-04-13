#include<stdio.h>
void sapxepchentructiep(int a[], int n){
	int pos, i;
	int x;
	for(i=1; i<n; i++){
		x = a[i]; pos = i-1;
		while((pos>=0)&&(a[pos]>x)){
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = x;
	}
}
int main() {
    int a[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(a) / sizeof(a[0]);

    sapxepchentructiep(a, n);

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

