#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

struct Tamgiac {
    struct Point p1;
    struct Point p2;
    struct Point p3;
};

float khoangcach(struct Point p1, struct Point p2) {
    float dx = p1.x - p2.x;
    float dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

float Chuvi(struct Tamgiac t) {
    float a = distance(t.p1, t.p2);
    float b = distance(t.p2, t.p3);
    float c = distance(t.p3, t.p1);
    return a + b + c;
}

float Dientich(struct Tamgiac t) {
    float a = distance(t.p1, t.p2);
    float b = distance(t.p2, t.p3);
    float c = distance(t.p3, t.p1);
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

struct Point tam(struct Tamiac t) {
    struct Point c;
    c.x = (t.p1.x + t.p2.x + t.p3.x) / 3;
    c.y = (t.p1.y + t.p2.y + t.p3.y) / 3;
    return c;
}

int main() {
    struct Tamgiac t;
    printf("Nhap toa do diem A:\n");
    scanf("%f %f", &t.p1.x, &t.p1.y);
    printf("Nhap toa do diem B:\n");
    scanf("%f %f", &t.p2.x, &t.p2.y);
    printf("Nhap toa do diem C:\n");
    scanf("%f %f", &t.p3.x, &t.p3.y);
    float p = Chuvi(t);
    float a = Dientich(t);
    struct Point c = tam(t);
    printf("Chu vi tam giac la: %f\n", p);
    printf("Dien tich tam giac la: %f\n", a);
    printf("Toa do trung diem tam giac la: (%f, %f)\n", c.x, c.y);
}

