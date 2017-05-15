/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 21:08:51 by cterrill          #+#    #+#             */
/*   Updated: 2017/04/23 14:56:14 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char *ret = dest;
	while ((*dest++ = *src++))
	{
		if (!n--)
    	return ret;
    }
  while (n--)
      *dest++ = 0;
  return ret;
}
/*
i = 0;
	if (dest == NULL || src == NULL)
	 return (NULL);
	while (i < n)
	{
		if (src[i])
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
*/
