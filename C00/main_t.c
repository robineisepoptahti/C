#include "ex00/ft_putchar.c"
#include "ex01/ft_print_alphabet.c"
#include "ex02/ft_print_reverse_alphabet.c"
#include "ex03/ft_print_numbers.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex05/ft_strlen.c"
#include <stdio.h>

int main(void){

char choice = 6;


printf("\nEnter the number of exercise: ");
scanf("%c", &choice);

char c = 'c';
int n = 5;

//Zero//
if (choice=='0')
ft_putchar(c);

//One//
if (choice=='1')
ft_print_alphabet();

//Two//
if (choice=='2')
ft_print_reverse_alphabet();

//Three//
if (choice=='3')
ft_print_numbers();

//Four//
if (choice=='4'){
        int a = 10;
        int b = 3;
        int mod = 4;
        int div = 2;
        ft_ultimate_div_mod(&a, &b);

}


//Five//
if (choice=='5')
{
       char *str = "kissa";

        ft_putstr(str);
}




if (choice=='5')
{
        int count;
        char *str = "cat";
        count = ft_strlen(str);
        printf("%d", count);
}


return (0);
}
