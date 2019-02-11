#include<stdio.h>
void func1(){printf("func1");}
void func2(){printf("func2");}
void func3(){printf("func3");}
void func4(){printf("func4");} 
void func5(){printf("func5");}
void main(int n)
{
    void(*funcptr[16])(void)={
        [1]=func1,
        [3]=func2,
        [4]=func3,
        [7]=func4,
        [15]=func5
    };
    printf("n: ");
    scanf("%d", &n);
    n=n%16;
    funcptr[n]();
}