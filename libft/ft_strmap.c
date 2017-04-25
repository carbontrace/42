/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 12:02:58 by cterrill          #+#    #+#             */
/*   Updated: 2017/04/23 14:50:45 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	char			*map;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	map = ft_strnew(ft_strlen(s));
	if (!map)
		return (NULL);
	i = 0;
	while(s[i])
	{
		map[i] = f(s[i]);
		i++;
	}
	return (map);
}
