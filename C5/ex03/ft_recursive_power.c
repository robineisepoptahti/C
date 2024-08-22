/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:58:11 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/15 16:03:42 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	nb_org;
	int	flag;

	flag = 0;
	nb_org = nb;
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	if (power == 1)
	{
		return (nb);
	}
	return (nb_org * ft_recursive_power(nb, power -1));
}
