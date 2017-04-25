/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 22:13:29 by cterrill          #+#    #+#             */
/*   Updated: 2017/04/22 22:38:40 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char*)s;
	while (*str && i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
