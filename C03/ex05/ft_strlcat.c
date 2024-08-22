/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:43:37 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/04 19:35:59 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	count_size(char *pointer)
{
	int	x;

	x = 0;
	while (pointer[x] != '\0')
	{
		x++;
	}
	return (x);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{	
	unsigned int	j;
	unsigned int	k;
	unsigned int	l;
	unsigned int	count;

	j = 0;
	k = count_size(dest);
	l = count_size(src);
	count = k + l;
	if ((k + 1) == size)
	{
		return (count);
	}	
	while ((src[j] != '\0') && (size > k))
	{
		dest[k] = src[j];
		j++;
		k++;
	}
	if (size == k)
	{
		k--;
	}	
	dest[k] = '\0';
	return (count);
}
