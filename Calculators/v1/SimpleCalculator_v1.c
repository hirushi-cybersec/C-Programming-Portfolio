#include<stdio.h>


int main()
{
    int x=1;
    while (x>0)
 {
    printf("\n----------------------------------------\n");
    int num1,num2,operation,answer;

    printf("enter your number1: ");
    scanf("%d",&num1);
    printf("enter your number2: ");
    scanf("%d",&num2);

    printf("\t operations: \n");
    printf("\t addition =1 \n");
    printf("\t subtraction = 2 \n");
    printf("\t division = 3 \n");
    printf("\t multiplication = 4 \n");
    printf("\t remainder = 5 \n");
    printf("choose an operation for calculations (ex:1) :");
    scanf("%d",&operation);

    switch(operation)
    {
    case 1:
        answer=num1+num2;
        printf("answer-addition: %d\n\n\n",answer);
        break;
    case 2:
        answer=num1-num2;
        printf("answer-subtraction: %d\n\n\n",answer);
        break;
    case 3:
        answer=num1/num2;
        printf("answer-division: %d\n\n\n",answer);
        break;
    case 4:
        answer=num1*num2;
        printf("answer-multiplication: %d\n\n\n",answer);
        break;
    case 5:
        answer=num1%num2;
        printf("answer-remainder: %d\n\n\n",answer);
        break;
    default:
        printf("number invalid \n\n\n");
        x++;
    }
 }
    return 0;
}



