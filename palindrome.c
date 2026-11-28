#include<stdio.h>
void palindrome(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}
void palindrome(int n){
    int rem,sum=0,temp;    
    temp=n;    
    while(n>0)    
    {    
        rem=n%10;    
        sum=(sum*10)+rem;    
        n=n/10;    
    }    
    if(temp==sum)    
        printf("%d is a palindrome number.",temp);    
    else    
        printf("%d is not a palindrome number.",temp);    
}