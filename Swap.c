/*
 * Swap.c
 *
 *  Created: 6/8/2023 11:43:43 AM
 *  Author: Azza Saeed
 */


/*
	Function Name        : swap1
	Function Returns     : nothing
	Function Arguments   : pointer to number1 , pointer to number2
	Function Description : swap between two numbers
*/
void swap1(int *ptr1,int *ptr2)
{
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
/*
	Function Name        : swap2
	Function Returns     : nothing
	Function Arguments   : pointer to number1 , pointer to number2
	Function Description : swap between two numbers
*/
void swap2(int *x, int *y)
{
    *x=(*x)+(*y);
    *y=(*x)-(*y);
    *x=(*x)-(*y);

}
/*
	Function Name        : swap3
	Function Returns     : nothing
	Function Arguments   : pointer to number1 , pointer to number2
	Function Description : swap between two numbers
*/
void swap3(int *x, int *y)
{
    *x=(*x)^(*y);
    *y=(*x)^(*y);
    *x=(*x)^(*y);
}
/*
	Function Name        : swap4
	Function Returns     : nothing
	Function Arguments   : pointer to number1 , pointer to number2
	Function Description : swap between two numbers
*/
void swap4(int *x, int *y)
{
    *x=(*x) * (*y);
    *y=(*x) / (*y);
    *x=(*x) / (*y);
}

