/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 20:55:21 by exam              #+#    #+#             */
/*   Updated: 2017/01/20 21:06:38 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int str_len(char *a)
{
	int i;
	i = 0;

	while (a[i] != '\0')
		i++;
	return(i);
}

char    *ft_strdup(char *src)
{
	int i;
	char *dup;

	dup = (char*)malloc(sizeof(*src) * (str_len(src) + 1));
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
