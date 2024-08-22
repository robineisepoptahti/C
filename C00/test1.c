/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shayati <shayati@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:30:48 by shayati           #+#    #+#             */
/*   Updated: 2024/07/14 21:17:25 by ykadosh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
#define RUSH_02_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

struct s_dict_entry
{
	char *number;
	char *value;
};

struct s_dictionary
{
	struct s_dict_entry *entries;
	int size;
};

char *ft_strcat(char *dest, char *src);

struct s_dictionary *parse_dictionary(const char *filename);
void free_dictionary(struct s_dictionary *dict);
void convert_number(struct s_dictionary *dict, char *number);

int is_valid_number(char *str);
int ft_strlen(char *str);
void ft_strcpy(char *dst, char *src);
int ft_strcmp(char *s1, char *s2);
struct s_dictionary *init_dictionary(int size);
int add_entry(struct s_dictionary *dict, int index, char *num_str,
			  char *val_str);
char *ft_strncpy(char *dest, char *src, unsigned int n);

#endif
Collapse
