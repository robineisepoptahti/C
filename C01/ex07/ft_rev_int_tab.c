/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwidjesk <rwidjesk@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 21:45:14 by rwidjesk          #+#    #+#             */
/*   Updated: 2024/07/01 11:00:09 by rwidjesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	size = size + 1;
	int temp[size];
	tab + size;// x4?
	while (i < size)
	{
	temp[i] = *tab;
	tab--;
	i++;	
	}
	i = 0;
	while (i < size)
	{
	*tab = temp[i];
	printf("%d", *tab);
	tab++;
	}
}
