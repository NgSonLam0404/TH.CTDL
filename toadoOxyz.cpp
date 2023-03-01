#include<stdio.h>
#include<conio.h>

struct DiemOxyz{
	float x,y,z;
};

typedef struct DiemOxyz ToaDo;

void nhapDiem(ToaDo &td);
void xuatDiem(ToaDo);

void nhapDiem(ToaDo &td){
	printf("nhap diem x0 = ");
	scanf("%f",&td.x);
	printf("nhap diem y0 = ");
	scanf("%f",&td.y);
	printf("nhap diem z0 = ");
	scanf("%f",&td.z);
}

void xuatDiem(ToaDo td){
	printf("M(%.3f,%.3f,%.3f)",td.x,td.y,td.z);
}

int main(){
	ToaDo td;
	nhapDiem(td);
	xuatDiem(td);
}
