/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 14:34:58 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/06/30 14:35:10 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	letter;

	letter = 'N';
	if (n >= 0)
	{	
		letter = 'P';
	}
	write(1, &letter, 1);
}
