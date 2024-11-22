#include <stdio.h>
int main(){
    //variable section

    double num1, num2, rslt;
    char op;

    //input section
    
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("\nEnter the second number: ");
    scanf("%lf", &num2);
    printf("\nEnter the operation you want to performe: ");
    scanf(" %c", &op);
    
    
    //condition section

    switch (op){
    case'+':
        rslt=(num1+num2);
        printf("%.2lf", rslt);
        break;
    case'-':
        rslt=(num1-num2);
        printf("%.2lf", rslt);
        break;
    case'*':
        rslt=(num1*num2);
        printf("%.2lf", rslt);
        break;
    case'/':
        if (num1!=0 && num2!=0){
            rslt=(num1*num2);
            printf("%.2lf", rslt);
        }
        else{
            printf("Invalid input you can't divide a number by zero.");
        }
        break;
        default:
        printf("\nYou have entered invalid input");
        break;
    }
    return 0;
}
