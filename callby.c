#include<stdio.h>
int plus1(int a){
    a++;
    return a;
}
int plus2(int* a){
    printf("in plus2:\n");
    printf("a=%d\n",a);
    printf("*a=%d\n",*a);
    (*a)++;
}
int main(){
    int a=10;
    printf("a=%d\n",a);
    printf("&a=%d\n",&a);

    a = plus1(a);
    printf("plus1:\n");
    printf("a=%d\n",a);
    printf("&a=%d\n",&a);
    printf("\n");

    plus2(&a);
    printf("plus2:\n");
    printf("a=%d\n",a);
    printf("&a=%d\n",&a);

    int x =3, y=11;
    y = y+ ++x;
    printf("x=%d, y=%d\n", x, y);
}


