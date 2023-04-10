#include <stdio.h>

int timkiemtuyentinh(int a[],int x,int n){
	int i=0;
	while (i<n && a[i]!=x){
		i++;
	}
	if(i==n) return -1;
	else return i;
}
int main() {
    int a[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(a) / sizeof(a[0]);
    int x = 10;

    int kq = timkiemtuyentinh(a, x, n);

    if (kq == -1) {
        printf("Khong tim thay\n");
    } else {
        printf("Da tim thay tai vi tri %d\n", kq);
    }

    return 0;
}

