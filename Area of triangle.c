#include<stdio.h>
#include<math.h>
float areabh(float, float);
float areaheron(float,float,float);
void main(){
    int choice;
    printf("Choose Method to calculate area of triangle:\n");
    printf("1. Using Base and Height\n");
    printf("2. Using Three Sides\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:float b,h;
                printf("Enter Base and Height of triangle: ");
                scanf("%f %f",&b,&h);
               printf("Area = %.2f",areabh(b,h));
                break;
        case 2: float x,y,z;
                printf("Enter three sides of triangle: ");  
                scanf("%f %f %f",&x,&y,&z);
                printf("Area = %.2f",areaheron(x,y,z));                
                break;
        default:
                printf("Invalid choice.\n");
        }
    }
float areabh(float b,float h){
    return 0.5*b*h;
    }
float areaheron(float a,float b,float c){
    float s,area;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
    }