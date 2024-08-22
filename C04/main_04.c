#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex03/ft_atoi.c"
#include <string.h>
#include <stdio.h>

int main(void)
{

        char choice = 6;

        printf("\nEnter the number of exercise: ");
        scanf("%c", &choice);

        // Zero//
        if (choice == '0')

        {
                char i[] = "cat";
                size_t value = strlen(i);
                size_t value1 = ft_strlen(i);
                printf("%zu\n", value);
                printf("%zu", value1);
        }

        // One//
        if (choice == '1')
        {
                char *str = "kissa";
                ft_putstr(str);
        }

        // Three//
        if (choice == '3')

        {
                char number[] = "  +-2000000000yt335";
                int number2 = ft_atoi(number);
                printf("%d", number2);
        }

        /*

        //Four//
        if (choice=='4')








        //Five//
        if (choice=='5')



        */

        return (0);
}
