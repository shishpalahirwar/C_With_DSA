#include <stdio.h>
#include <stdlib.h>
struct stack{
    int data;
    struct stack *next;
};
struct stack *top;
void create(int n){
    top=(struct stack*)malloc(sizeof(struct stack));
    top-> data=n;
    top-> next=NULL;
}
void push(int n){
    if(top==NULL){
        create(n);
    }
    else{
    struct stack *p;
    p=(struct stack*)malloc(sizeof(struct stack));
    p->data=n;
    p->next=top;
    top=p;
        
    }
}
void pop(){
    struct stack *t;
    t=top;
    top=top->next;
    free(t);
}
void display(){
    struct stack *temp;
    //temp=(struct stack*)malloc(sizeof(struct stack));
    for(temp=top; temp!=NULL;temp=temp->next){
        printf(" %d",temp->data);
    }
}
int main() {
    push(12);
    push(13);
    push(1);
    push(2);
    push(14);
    pop();
    display();

    return 0;
}