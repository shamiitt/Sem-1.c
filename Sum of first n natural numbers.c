#include<stdio.h>
int sum(int n);
void main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    printf("Sum of first %d natural numbers is %d",n,sum(n));
}

int sum(int n){
    int i,s=0;
    for(i=1;i<=n;i++){
        s=s+i;
    }
    return s;
}