// Including all needed preprocessors

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    
// Decelration of all needed varibales and strings

    double num1, num2, p_num, sqrt_num, p, s_num;
    char op;

// Taking input from the user and putting them in the right varibales and strings
    
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("\nEnter the second number: ");
    scanf("%lf", &num2);

// Added a continues calculation using do while loop so if the user wants to do other operation can do it as well in one go

    if(num1<=0 || num1>=0 && num2<=0 || num2>=0){
        char ch[3]=("yes");
        while(strcmp(ch,"yes")==0 || strcmp(ch,"Yes")==0){
            printf("\nEnter the operation you want to performe: ");
            scanf(" %c", &op);
    
// Used a switch case to do the needful as the user asked for
        
            switch (op){
                case'+':
                    printf("%.2lf", num1+num2);
                    break;
                case'-':
                    printf("%.2lf", num1-num2);
                    break;
                case'*':
                printf("%.2lf", num1*num2);
                break;
            case'/':
                    if (num1!=0 && num2!=0){
                        printf("%.2lf", num1*num2);
                    }
                    else{
                        printf("Invalid input you can't divide a number by zero.");
                    }
                    break;
                case'^':
                    printf("Enter the number you the power of: ");
                    scanf("%f", &p_num);
                    printf("Enter the power: ");
                    scanf("%f", &p);
                    printf("%.2f", pow(p_num, p));
                case'r':
                    printf("Enter the number you want the square root of: ");
                    scanf("%f", &s_num);
                    printf("%.2f", sqrt(s_num));
                    break;
                default:
                    printf("\nYou have entered invalid input");
                    break;
                }
        
//Taking input from the user if he/she wants to do more operation on the number
        
            printf("\n\nDo you want to perform more operations? (yes/Yes): ");
            scanf("%s", &ch);}
    }
    else{
        printf("please enter a valid input and try agian.");
    }
    return 0;
}
