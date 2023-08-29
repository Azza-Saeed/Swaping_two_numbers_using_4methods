#include <stdio.h>
#include <stdlib.h>

#include "Swap.h"

int main()
{
    int first_number;
    int second_number;

    printf("Please enter first number:\n");
    scanf("%d",&first_number);
    printf("Please enter second number:\n");
    scanf("%d",&second_number);

    swap1(&first_number,&second_number);
    printf("Two numbers after swaping first_number=%d, second_number=%d\n",first_number,second_number);
    swap2(&first_number,&second_number);
    printf("Two numbers after swaping first_number=%d, second_number=%d\n",first_number,second_number);
    swap3(&first_number,&second_number);
    printf("Two numbers after swaping first_number=%d, second_number=%d\n",first_number,second_number);
    swap4(&first_number,&second_number);
    printf("Two numbers after swaping first_number=%d, second_number=%d\n",first_number,second_number);

    return 0;
}
