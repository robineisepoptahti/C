/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:43:37 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/04 19:32:17 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	post_loop(char *s1, char *s2, unsigned int n, unsigned int i)
{
	int	answ1;

	answ1 = s1[i] - s2[i];
	if (n <= i)
	{
		return (0);
	}
	else
	{
		return (answ1);
	}
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	int				answ1;
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (n >= i))
	{
		if (s1[i] == s2[i] || i == n)
		{
			if (s1[i] == '\0' || (i == n))
			{
				return (0);
			}
		}
		else
		{
			answ1 = s1[i] - s2[i];
			return (answ1);
		}
		i++;
	}
	answ1 = post_loop(s1, s2, n, i);
	return (answ1);
}
