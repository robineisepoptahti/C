/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:16:57 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/09 10:14:00 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int conv_int(long int nb, char *src, int i, int j)
{
	char lista[20];
	int rem;

	if (nb < 0)
	{
		src[j++] = '-';
		nb = nb * -1;
	}
	while (nb != 0)
	{
		rem = nb % 10;
		lista[i++] = rem + '0';
		nb = nb / 10;
	}
	while (i-- >= 0)
	{
		src[j++] = lista[i];
	}
	return (j);
}

void ft_putnbr(int nb)
{
	char src[13];
	int i;
	int j;
	long int nb1;

	nb1 = nb;
	i = 0;
	j = 0;

	if (nb1 == 0)
	{
		src[j++] = '0';
	}
	else
	{
		j = conv_int(nb1, src, i, j);
	}
	src[j] = '\0';
	write(1, src, j);
}
