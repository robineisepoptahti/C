/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 19:33:24 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/07 17:06:55 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	first_letter;
	int	i;

	i = 0;
	first_letter = 1;
	while (str[i] != '\0')
	{
		if ((first_letter == 1) && ((str[i] >= 'a') && (str[i] <= 'z')))
		{
			str[i] = str[i] - 32;
			first_letter = 0;
		}
		else if ((str[i] < '0') || ((str[i] > 'Z') && (str[i] < 'a')))
		{
			first_letter = 1;
		}
		else if (((str[i] < 'A') && (str[i] > '9')) || (str[i] > 'z'))
		{
			first_letter = 1;
		}
		i++;
	}
	return (str);
}
