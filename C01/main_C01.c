#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include <stdio.h>

int main(void){

char choice = 6;
int n;
n = 24;
printf("\nEnter the number of exercise: ");
scanf("%c", &choice);

if (choice=='0')
{ft_ft(&n);
printf("%d", n); 
}
if (choice=='1')
{
int *n0 = &n;
int **n1 = &n0; 
int ***n2 = &n1; 
int ****n3 = &n2; 
int *****n4 = &n3; 
int ******n5 = &n4; 
int *******n6 = &n5; 
int ********nbr = &n6; 

ft_ultimate_ft(&nbr);
printf("%d", ********nbr); 
}
if (choice=='2')
{
int a = 3;
int b = 6;
printf("%d ", a);
printf("%d, ", b);
ft_swap(&a, &b);
printf("%d ", a);
printf("%d", b);
}
/*if (choice=='2')
ft_print_reverse_alphabet();
*/if (choice=='3')
{
        int a = 6;
        int b = 2;
        int mod = 4;
        int div = 2;

        printf("%d, %d\n", div, mod);
        ft_div_mod(a, b, &div, &mod);
        printf("%d, %d", div, mod);
}


if (choice=='4')
{
        int a = 5;
        int b = 21;
        int mod = 4;
        int div = 2;
        printf("%d, %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
        printf("%d, %d", a, b);
}
//5

if (choice=='5')
{
        int count;
        char *str = "kissa";
        ft_putstr(str);
}




//6
if (choice=='6')
{
        int count;
        char *str = "cat";
        count = ft_strlen(str);
        printf("%d", count);
}


return (0);
}
