#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top=-1;

bool isEmpty(){
    if (top==-1)
    {
        return true;
    }else{
        return false;
    }
}

bool isFull(){
    if (top==MAX_SIZE)
    {
        return true;
    }else{
        return false;
    }
    
}

void push(int data){
    if(isFull()){
        printf("stack overflow!!\n");
    }else{
        top=top+1;
        stack[top]=data;
    }
}

int pop(){
    if (!isEmpty())
    {
        int data=stack[top];
        top=top-1;
        return data;
    }else{
        printf("underflow\n");
    }
    
}

int peek(){
    if (isEmpty())
    {
        printf("stack is empty\n");
    }else{
        return stack[top];
    }
    
}

void displayStack(){
    printf("stack ke element:");
    for (int i = 0; i <=top ; i++)
    {
        printf("%d  ",stack[i]);
    }
    printf("\n");
    
}
int main(){
    
    push(10);
    push(20);
    push(30);
    push(40);

    printf("top element is:%d\n",peek());

    displayStack();

    pop();
    pop();
    printf("top element is:%d\n",peek());

    displayStack();
    return 0;
}