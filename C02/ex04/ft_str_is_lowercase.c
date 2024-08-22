/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 19:33:24 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/05 20:10:54 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	value;

	value = 1;
	while (*str != '\0')
	{
		if ((*str < 'a') || (*str > 'z'))
		{
			value = 0;
		}
		str++;
	}
	return (value);
}
