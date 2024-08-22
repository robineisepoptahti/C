/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:37:38 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/15 17:33:28 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calculator(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (1);
	}
	else if (index == 1)
	{
		return (0);
	}
	else
	{
		return (calculator(index - 1) + calculator(index - 2));
	}
}

int	ft_fibonacci(int index)
{
	int	value;

	index++;
	if (index == 0)
	{
		return (-1);
	}
	value = calculator(index);
	return (value);
}
