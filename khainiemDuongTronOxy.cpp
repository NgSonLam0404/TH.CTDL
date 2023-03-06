#include <stdio.h>
struct DuongTron
{
	float x,y;
	float r;
};
typedef DuongTron Dtron;
void nhapToaDo(Dtron &);
void xuarToaDo(Dtron);

void nhapToaDo(Dtron &dt)
{
	printf("nhap hoanh do");
	scanf("%f",&dt.x);
	printf("nhap tung do");
	scanf("%f",&dt.y);
	printf("nhap va ban kinh cua duong tron");
	scanf("%f",&dt.r);
}
void xuatToaDo(Dtron dt)
{
	printf(" duong tron trong mat phang oxy co toa do la: \n");
	printf(" (%.1f,%.1f) ban kinh la r=%1.f",dt.x,dt.y,dt.r);
}
int main()
{
	Dtron dt;
	nhapToaDo(dt);
	xuatToaDo(dt);
}

