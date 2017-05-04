/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 22:00:49 by cterrill          #+#    #+#             */
/*   Updated: 2017/04/23 14:59:51 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		last_i;
	int		j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return((char*)&big[0]);
	while(big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			last_i = i;
			while(big[i] == little[j] && i < len)
			{
				if (little[j++ + 1] == '\0')
					return ((char*)&big[last_i]);
				i++;
			}
			j = 0;
			i = last_i;
		}
	}
	return (0);
}
