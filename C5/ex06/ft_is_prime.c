/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:39:55 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/15 15:57:46 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calculate(int nb)
{
	double	answ;
	double	i;
	double	j;

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

int	ft_is_prime(int nb)
{
	int	value;

	if (nb == 1 || nb <= 0)
	{
		return (0);
	}
	value = calculate(nb);
	return (value);
}
