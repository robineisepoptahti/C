/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:43:37 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/04 14:50:37 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{	
	int		i;
	int		j;
	char	*dest1;

	dest1 = dest;
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}	
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest1);
}
