/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:43:37 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/04 14:43:24 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		k;
	char	*dest;

	i = 0;
	if (str[0] == 0 || to_find[0] == 0)
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		dest = str + i;
		j = 0;
		k = i;
		while (str[k++] == to_find[j++])
		{
			if (to_find[j] == '\0')
			{
				return (dest);
			}
		}
		i++;
	}
	return (NULL);
}
