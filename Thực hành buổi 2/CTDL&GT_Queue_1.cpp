
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
//nguon: https://laptrinhtudau.com/cai-dat-hang-doi-queue-bang-mang-c-c/
//nguon: https://freetuts.net/cai-dat-hang-doi-queue-bang-mang-mot-chieu-3232.html
int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void push(int value) {
    if (rear == MAX_SIZE - 1) {
        printf("H�ng doi day!\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("�� th�m phan tu %d v�o h�ng doi.\n", value);
    }
}

void pop() {
    if (front == -1 || front > rear) {
        printf("H�ng doi rong!\n");
    } else {
        printf("Phan tu %d d� duoc loai bo khoi hang doi.\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Hang doi rong!\n");
    } else {
        printf("C�c phan tu trong h�ng doi l�: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
