/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:59:43 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/15 16:08:22 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	double	answ;
	double	i;
	double	num;

	num = nb;
	if (nb <= 0)
	{
		return (0);
	}
	i = 0.000000000;
	while (i++ <= num)
	{
		answ = (num / i) *(num / i);
		if (answ == num)
		{
			return (i);
		}
	}
	return (0);
}
