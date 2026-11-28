#include<stdio.h>
int gcd(int ,int );
void main(){
    int a,b;
    printf("Enter Numbers: ");
    scanf("%d %d",&a,&b);
    printf("GCD of %d and %d is %d",a,b,gcd(a,b));
}

int gcd(int a,int b){
    int rem;
    while(b!=0){
    rem=a%b;
    a=b;
    b=rem;
    }
    return a;
}