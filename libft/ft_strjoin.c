/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 12:02:37 by cterrill          #+#    #+#             */
/*   Updated: 2017/04/23 14:44:53 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char 	*joint;
	int		s1l;
	int		s2l;

	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2);
	joint = ft_strnew((s1l + s2l + 1) * sizeof(char));
	if (!joint)
		return(NULL);
	joint = ft_strcat((char*)s1, (char*)s2);
	return (joint);
}
