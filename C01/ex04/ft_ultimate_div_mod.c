/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:59:38 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/01 19:10:52 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result1;
	int	result2;
	int	temp;

	temp = *a;
	result1 = *a / *b;
	*a = result1;
	result2 = temp % *b;
	*b = result2;
}
