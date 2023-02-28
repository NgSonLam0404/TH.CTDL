#include<stdio.h>
#include<conio.h>

struct matPhangOxy{
	float x,y;
};

typedef struct matPhangOxy ToaDo;

void nhapDiem(ToaDo &);
void xuatDiem(ToaDo);

void nhapDiem(ToaDo &td){
	printf("nhap diem x0 = ");
	scanf("%f",&td.x);
	printf("nhap diem y0 = ");
	scanf("%f",&td.y);
}

void xuatDiem(ToaDo td){
	printf("M(%.2f,%.2f)",td.x,td.y);
}

int main(){
	ToaDo td;
	nhapDiem(td);
	xuatDiem(td);
	getch();
	return 0;
}
