#include<stdio.h>

struct DonThuc{
	int heSo;
	int bacDonThuc;
};
typedef struct 	DonThuc Donthuc;
void nhapDonThuc(DonThuc &);
void xuatDonThuc(DonThuc);

void nhapDonThuc(DonThuc &dt){
	
	printf ("nhap he so ");
	scanf("%d",&dt.heSo);
	printf ("nhap bac don thuc");
	scanf ("%d",&dt.bacDonThuc);
}
void xuatDonThuc(DonThuc dt){
	printf("don thuc la %dx^%d",dt.heSo,dt.bacDonThuc);
}

int main(){
	DonThuc dt;
	nhapDonThuc(dt);
	xuatDonThuc(dt);
	return 0;
	
}
