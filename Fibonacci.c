#include<stdio.h>
void fibonacci(int n);
void main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    printf("Fibonacci of %d numbers is ",n);
    fibonacci(n);
}
void fibonacci(int n){
    int a=0,b=1,c,i;
    printf("%d\t %d\t ",a,b);
    for(i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    printf("%d\t ",c);
    }
}