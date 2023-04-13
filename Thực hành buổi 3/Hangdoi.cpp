#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int rear=-1, front=-1;
void push(int value){
	if (rear==MAX_SIZE -1) printf("hang doi da day");
	else{
		if(front==-1) front=0;
		rear++;
		queue[rear]=value;
		printf("da them phan %d vao hang doi\n",value);
	}
}

void pop(){
	if(front==-1|| front>rear) printf("hang doi rong");
	else{
			front++;
	}
}
void display(){
	if (front==-1|| front>rear) printf("hang doi rong\n");
	else{
		printf("hang doi hien tai la:  ");
		for (int i=front; i<=rear;i++){
			printf("%d\t",queue[i]);
		}
	}
}
int main() {
    int a[] = {41, 23, 4, 14, 56, 1};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Hang doi ban dau la\n");
    for (int i = 0; i < n; i++) {
        push(a[i]);
    }

    printf("\n");
    printf("them phan tu 55 vao hang doi \n");
    push(55);
    display();

    printf("\n");
    printf("phai loai bo phan tu 41 truoc khi loai phan tu 23...\n");
    pop();
    printf("loai bo phan tu 23....\n");
    pop();
    display();

    return 0;
}

