//limitation= no parenthesis
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 50

typedef struct {
    int top;
    int items[MAX];
}stack;

void push(stack* s,int value){
     if(s->top==MAX-1){
         printf("stack overflow can't push");
         exit(1);
     }
     s->items[++s->top]=value;
 }
 
int pop(stack* s){
     if(s->top==-1){
         printf("stack underflow can't pop");
        //  return 1;
         exit(1);
     }
     return s->items[s->top--];
 }
int isEmpty(stack* s){
     if(s->top==-1){
         return 1;
     }
     return 0;
 }
 int stackTop(stack*s){
     return s->items[s->top];
 }
 int pOrder(char a){
     switch(a){
        
        case '^':
        return 0;
        case '*':
        return 1;
        case '/':
        return 1;
        case '+':
        return 2;
        case '-':
        return 2;
     }
 }
 
int preced(char a,char b){
    // return true if a>b in precedence
    if(pOrder(a)>pOrder(b)) return 0;
    return 1;
    
}
void infix_to_postfix(char* infix,char* postfix){
    int n=strlen(infix);
    stack stk;
    stk.top=-1;
    int k=0; //k=index of postfix
    for(int i=0;i<n;i++){
        if(infix[i]<='9' && infix[i]>='0'){
            postfix[k++]=infix[i];
            
        }
        else{
            while(!isEmpty(&stk) && preced(stackTop(&stk),infix[i])){
                //if stackTop is greater in precedence then current element the start popping
                char opr=pop(&stk);
                postfix[k++]=opr;
            }
            
            push(&stk,infix[i]);
        }
    }
    while(!isEmpty(&stk)){
        postfix[k++]=pop(&stk);
    
 }

}

int main()
{   
    stack stk;
    stk.top=-1;
    char infix[MAX]; 
    printf("enter a valid infix expression:");
    scanf("%s",infix);
    char postfix[MAX];
    infix_to_postfix(infix,postfix);
    printf("postfix=%s \n",postfix);

    return 0;
}


