/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:01:49 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/07 21:33:20 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	conversion(int value, char *str, int i, int negative)
{
	while (str[i] <= '9' && str[i] >= '0')
	{
		value = value * 10 + str[i] - '0';
		i++;
	}
	if (negative)
	{
		value = value * -1;
	}
	return (value);
}

int	ft_atoi(char *str)
{
	int	value;
	int	i;
	int	count;
	int	negative;

	i = 0;
	value = 0;
	count = 2;
	while ((str[i] == ' ') || ((str[i] > 8) && (str[i] < 14)))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			count++;
		}
		i++;
	}
	negative = count % 2;
	value = conversion(value, str, i, negative);
	return (value);
}
