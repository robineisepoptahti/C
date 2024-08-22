/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:39:55 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/15 15:53:25 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calculates(int nb)
{
	double	answ;
	double	i;
	double	j;

	j = 1.000;
	answ = 1.000;
	i = 2.000;
	while ((nb / 2) > i)
	{
		answ = nb / i;
		j = 0;
		while (j++ < nb)
		{
			if (j == answ)
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int	increase_num(int nb)
{
	int	value;

	value = 0;
	while (value != 1)
	{
		value = calculates(nb);
		nb++;
	}
	nb--;
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	int	value;

	if (nb == 1 || nb <= 0)
	{
		return (2);
	}
	value = increase_num(nb);
	return (value);
}
