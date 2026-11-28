#include<stdio.h>
void prime(int);
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    prime(n);
}

void prime(int n){
    int i,temp=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            temp=1;
            break;
        }
    }
    if(temp==0){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
}