#include<stdio.h>
int factorial(int n);
int main(){
    int n,r,ncr;
    printf("Enter Value of n and r: ");
    scanf("%d %d",&n,&r);
    ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("%dC%d is %d",n,r,ncr);
}
int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}