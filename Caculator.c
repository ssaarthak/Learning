#include <stdio.h>
# include <string.h>
int main(){
// Variable & Arrays Section

    double num1, num2, rslt;
    char op;
    char ch[4];

// Input Section
    
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("\nEnter the second number: ");
    scanf("%lf", &num2);

// Continuous Calculations & Condition Section


    do{
        printf("\nEnter the operation you want to performe: ");
        scanf(" %c", &op);    
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
        printf("\n\nDo you want to perform more operations? (yes/Yes): ");
        scanf("%s", &ch);
    }
    while(strcmp(ch,"yes")==0 || strcmp(ch,"Yes")==0); 
    return 0;
}
