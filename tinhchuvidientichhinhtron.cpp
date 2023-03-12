#include <stdio.h>

struct Circle {
    float x; 
    float y; 
    float r; 
};

int main() {
    struct Circle c; // khai báo m?t bi?n du?ng tròn
    printf("Nhap toa do tam va ban kinh cua duong tron: ");
    scanf("%f%f%f", &c.x, &c.y, &c.r);

    float PI = 3.14159;
    float dienTich = pi * c.r * c.r; 
    float chuVi = 2 * pi * c.r; 

    printf("Dien tich cua duong tron la: %f\n", dienTich);
    printf("Chu vi cua duong tron la: %f\n", chuVi);

}
