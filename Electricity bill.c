#include<stdio.h>
#define SURCHARGE 100.00
void calculateBill(int units);
void main(){
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    calculateBill(units);                                    
}

void calculateBill(int units){
    float billamount;
    if(units<=0){
        printf("Invalid number of Units\n");  
    }
    else{
        if(units<=200){
        billamount = units*0.80;
    }
    else if(units<=300){
        billamount=0.80*200+(units-200)*0.90;
    }
    else 
        billamount=0.80*200+0.90*100+(units-300)*1.00;

    if(billamount>400){
        billamount=billamount+billamount*0.15;
    }
    billamount=billamount+SURCHARGE;
    printf("Total Electricity Bill = %.2f\n", billamount);
}
}