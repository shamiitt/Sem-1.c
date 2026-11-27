#include<stdio.h>
double calculator(double a,double b){
    int choice;
    printf("Enter your choice: 1. Add 2. Subtract 3. Multiply 4. Divide\n");
    scanf("%d", &choice);   
    switch(choice){
        case 1:
            return a + b;
        case 2:
            return a - b;
        case 3:
            return a * b;
        case 4:
            if(b != 0)
                return a / b;
            else{
                printf("Error: Division by zero\n");
                return 0;
            }
        default:
            printf("Invalid choice\n");
            return 0;
    }
}

int main(){
    double num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    result = calculator(num1, num2);
    printf("Result: %lf\n", result);
    return 0;
}

// But In case of invalid choice and division by zero, the program will print Errorand return 0 as the result. 