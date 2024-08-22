/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 19:33:24 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/05 20:16:38 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	value;

	value = 1;
	while (*str != '\0')
	{
		if ((*str < 'A') || (*str > 'Z'))
		{
			value = 0;
		}
		str++;
	}
	return (value);
}
