#include<stdio.h>
#define MAXSTACK 10
#define false 0
#define true 1
char stack[MAXSTACK]="{{})}";
int top = -1;
int fun(char* s){
    while(*s){
        if(*s==')'){
            if(top>=0 && stack[top--]=='(');
            else return false;     
        }
        else if(*s==']'){
            if(top>=0 && stack[top--]=='[');
            else return false;     
        }
        else if(*s=='}'){
            if(top>=0 && stack[top--]=='{');
            else return false;     
        }else{
            stack[++top]= *s;
        }
        s ++;
    }
    return -1 == top;
}
int main(){
    top=fun(stack);
    printf("top=%d",top);
}
