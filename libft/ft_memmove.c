/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 11:44:20 by cterrill          #+#    #+#             */
/*   Updated: 2017/04/22 22:41:17 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	signed char		op;
	signed char		cur;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	if (dst < src)
	{
		op = 1;
		cur = 0;
	}
	else
	{
		op = -1;
		cur = n - 1;
		n = -1;
	}
	while (cur != (signed char)n)
	{
		d[cur] = s[cur];
		cur += op;
	}
	return (dst);
}
