/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 16:04:38 by cterrill          #+#    #+#             */
/*   Updated: 2017/04/23 14:57:35 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strdup(const char *s1)
{
	char	*str;
	int		size;

	size = 0;
	while (s1[size++] != '\0')
		size++;
	str = (char*)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	size = 0;
	while (s1[size])
	{
		str[size] = s1[size];
		size++;
	}
	return (str);
}
