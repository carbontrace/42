/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 16:04:38 by cterrill          #+#    #+#             */
/*   Updated: 2017/04/23 14:58:50 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strndup(const char *s1, size_t n)
{
	char			*str;
	size_t			size;
	
	size = 0;
	while (s1[size++] != '\0' && size < n)
		size++;
	str = (char*)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	size = 0;
	while (s1[size] && size < n)
	{
		str[size] = s1[size];
		size++;
	}
	return (str);
}
