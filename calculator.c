//=============================================================
//
//                               Author: Thiago Lucas de Lima
//
//=============================================================

/*Simple calculator program using some basic knowledge in the C language*/

#include <stdio.h>
#include <stdlib.h>

//Includes all 4 basic operations
void addition(double *number);
void subtraction(double *number);
void multiplication(double *number);
void division(double *number);

int main ()
{
    double first_num;
    double *total=&first_num;
    char operation;

    printf("==================================================\n===============SIMPLE CALCULATOR==================\n==================================================\n\n");
    printf("Insert a number: ");
    scanf("%lf", &first_num);

    do
    {
        fflush(stdin);
        //receives a Char to identify the operation
        printf("\nChoose an operantion from the options below (type the symbol): \n\t(+) Addition;\n\t(-) Subtraction;\n\t(*) Multiplication;\n\t(/) Division;\nOr type 0 to Exit\n");
        scanf("%c", &operation);

        //calls the function of the operation based on the user's choice
        if (operation=='+')
            addition(total);
        else if (operation=='-')
            subtraction(total);
        else if (operation=='*')
            multiplication(total);
        else if (operation=='/')
            division(total);
        else if (operation!='0')
            printf("Invalid operation!\n");

        //shows the partial result after each operation and asks if the user wants to continue calculating
        if (operation=='+' || operation=='-' || operation=='/' || operation=='*')
        {
            system("cls");
            fflush(stdin);
            printf("The partial total is %.3lf.\n\nDo you wish to keep calculating? (Type 1 for YES and 0 for NO): \n", *total);
            scanf("%c", &operation);
        }

    }   while (operation!='0');

    printf("\nThe total is %.3lf", *total);
}

void addition(double *number)
{
    double sec_num;
    printf("Type a number to add: ");
    scanf("%lf", &sec_num);
    fflush(stdin);

    *number=(*number+sec_num);
}

void subtraction(double *number)
{
    double sec_num;
    printf("Type a number to subtract: ");
    scanf("%lf", &sec_num);
    fflush(stdin);

    *number=(*number-sec_num);
}

void multiplication(double *number)
{
    double sec_num;
    printf("Type a number to multiply: ");
    scanf("%lf", &sec_num);
    fflush(stdin);

    *number=(*number*sec_num);
}

void division(double *number)
{
    double sec_num;
    printf("Type a number to divide by: ");
    scanf("%lf", &sec_num);
    fflush(stdin);

    *number=(*number/sec_num);
}
