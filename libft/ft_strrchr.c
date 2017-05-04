/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 18:22:04 by cterrill          #+#    #+#             */
/*   Updated: 2017/04/23 15:00:52 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		i = ft_strlen(str) + 1;
	else
		i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i])
			return ((char*)str);
		i--;
	}
	return (NULL);
}
