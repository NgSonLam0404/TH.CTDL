#include<stdio.h>
//nguon: https://blog.luyencode.net/ngan-xep-stack/
int top = -1;
 
bool IsFull(int capacity){
    if(top >= capacity - 1){
        return true;
    }else{
        return false;
    }
}
 
bool IsEmpty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}
 
void Push(int stack[], int value, int capacity){
    if(IsFull(capacity) == true){
        printf("\nStack day.");
    }else{
        ++top;
        stack[top] = value;
    }
}
 
void Pop(){
    if(IsEmpty() == true){
        printf("\n");
    }else{
        --top;
    }
}
 
 
int Top(int stack[]){
    return stack[top];
}
 
int Size(){
    return top + 1;
}
int main(){
    int capacity = 3; 
    int top = -1; 
    int stack[capacity];
    
    Push(stack, 5, capacity); 
    
    printf("\nkích thuoc hien tai cua ngan xep %d", Size());
    
    Push(stack, 10, capacity);
    Push(stack, 24, capacity);
    
    printf("\n kích thuoc hien tai cua ngan xep %d", Size());
    Push(stack, 12, capacity); 

    printf("\n phan tu dang nam trên dinh cua ngan xep là %d", Top(stack));
    
   
    for(int i = 0 ; i < 3;i++)
    Pop();
    printf("\n kích thuoc hien tai cua ngan xep %d", Size());
    
   
    Pop();  
}
