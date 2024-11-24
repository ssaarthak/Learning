// Including all needed preprocessors

#include <stdio.h>
# include <string.h>

int main(){
    
// Decelration of all needed varibales and strings

    double num1, num2, rslt;
    char op;
    char ch[4];

// Taking input from the user and putting them in the right varibales and strings
    
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("\nEnter the second number: ");
    scanf("%lf", &num2);

// Added a continues calculation using do while loop so if the user wants to do other operation can do it as well in one go

    do{
        printf("\nEnter the operation you want to performe: ");
        scanf(" %c", &op);
    
// Used a switch case to do the needful as the user asked for
        
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
        
//Taking input from the user if he/she wants to do more operation on the number
        
        printf("\n\nDo you want to perform more operations? (yes/Yes): ");
        scanf("%s", &ch);
    }
    while(strcmp(ch,"yes")==0 || strcmp(ch,"Yes")==0); 
    return 0;
}
