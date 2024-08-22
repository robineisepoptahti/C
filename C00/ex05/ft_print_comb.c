/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 14:36:02 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/06/30 14:36:07 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_numbers(char num1, char num2, char num3, char sep1)
{
	if (num3 == '2')
	{
	}
	else
	{
		write(1, &sep1, 1);
		sep1 = ' ';
		write(1, &sep1, 1);
	}
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &num3, 1);
}


void    iterate(char num1, char num2, char num3, char sep1)
{
        while (num1 <= '8')
        {
                num2 = '/';
                num1++;
                while (num2 <= '8')
                {
                        num3 = '/';
                        num2++;
                        while (num3 <= '8')
                        {
                                num3++;
                                if ((num1 >= num2) || (num2 >= num3))
                                {
                                        continue ;
                                }
                                else
                                {
                                        write_numbers(num1, num2, num3, sep1);
                                }
                        }
                }
        }
}



void	ft_print_comb(void)
{
	char	sep1;
	char	num1;
	char	num2;
	char	num3;

	sep1 = ',';
	num1 = '/';
	num2 = '/';
	num3 = '/';
	iterate(num1, num2, num3, sep1);
}
