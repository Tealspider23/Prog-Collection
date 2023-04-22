#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node{
    int top;
    int maxsize;
    int *array;
};
//Array Method for Stacks operation .
struct node* create(int max)
{
    struct node *stack = (struct node*)malloc(sizeof(struct node));
    stack->maxsize=max;
    stack->top=-1;
    stack->array=(int*)malloc(stack->maxsize*sizeof(int));

    // in the above statements memory is being created . Dynamically assigning malloc .
    // so if max = 5 , then array size would be 5*4 =20
}

int isFull(struct node *stack)
{
    if(stack->top == stack->maxsize - 1){
        printf("Maximum memory reached .");
    }
    return stack->top == stack->maxsize-1;

}

int isEmpty(struct node* stack){
    return stack->top == -1; 
}

void Push(struct node* stack,int item){

    if(isFull(stack)){
        return;
    }
    stack->array[++stack->top]=item;
    printf("%d has been successfully pushed \n",item);

}

int Pop(struct node* stack){
    if(isEmpty(stack)){
        return INT_MIN;
    }
    return stack->array[stack->top--];

 
}

int peek(struct node* stack){
    if(isEmpty(stack)){
        return INT_MIN;
    }
    return stack->array[stack->top];

}

int main(){
    int n;
    printf("How many elements you want to enter in stack ? :");
    scanf("%d",&n);
    struct node* stack =create(n);

    Push(stack,5);
    Push(stack,15);
    Push(stack,30);
    Push(stack,13);

    return 0;
}

  
    




