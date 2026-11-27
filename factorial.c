#include<stdio.h>
int factorial(int n);
void main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));
}

int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}