#include<stdio.h>

int timkiemtuyentinh(int a[], int n, int x){
	int i=0;
	a[n]=x;
	while (a!=x){
		i++;
	}
	if(i==n)
	return -1;
	else 
	return i;
}
