#include <stdio.h>
void f1(int a, int b){ printf("x+y= %d",a+b);}
void f2(int a, int b){ printf("x-y= %d",a-b);}
void f3(int a, int b){ printf("x*y= %d",a*b);}
void f4(int a, int b){ printf("x/y= %d",a/b);} 
int main(){
    int x=100,y=5,function;
    void (*funcptr[4])(int,int) = {f1, f2, f3, f4};
    printf("choose a function: ");
    scanf("%d", &function);
    function--;
    funcptr[function](x,y);
}
