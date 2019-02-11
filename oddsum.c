#include<stdio.h>
int sum =0;
int sumN(int n){
    
    if((n%2)==0){
        n=n-1;
    }
    for(int i=0;i<=((n-1)/2);i++){
        sum=sum+2*i+1;   
    }
}
int main(int N){
    printf("Input N= ");
    scanf("%d",&N);
    sumN(N);
    printf("Sum=%d\n",sum);
    return 0;
}