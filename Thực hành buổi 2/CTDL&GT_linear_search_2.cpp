#include<stdio.h>

int timkiemtuyentinh(int a[], int n, int x){
	int i=0;
	a[n]=x;
	while (a[i]!=x){
		i++;
	}
	if(i==n)
	return -1;
	else 
	return i;
}
int main(){
	 int a[] = {3,4,2,1,0,5};
    int n = 6;
    int x = 0;
    int giatri = timkiemtuyentinh(a, n, x);
    if( giatri!=-1)
    printf ("phan tu %d nam trong mang, o vi tri thu %d",x,giatri);
    else printf("phan tu khong tont ai trong mang");
}
