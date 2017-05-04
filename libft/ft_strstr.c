/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 22:00:49 by cterrill          #+#    #+#             */
/*   Updated: 2017/04/26 14:59:56 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char*)&big[0]);
	while (big[i] != '\0')
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j])
			{
				if (little[j] == '\0')
					return ((char*)&big[i]);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (0);
}

/*
int			main ()
{
	ft_strstr("That's quite a treasure there...", "treasure");
	return (0);
}***/
