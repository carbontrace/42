/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 12:05:48 by cterrill          #+#    #+#             */
/*   Updated: 2017/04/23 23:16:51 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

#define WHITESPACE(x) x == '\t' || x == '\n' || x == ' '

char *ft_strtrim(char const *s)
{
	char 	*newstr;
	int		i;
	int		j;
	
	newstr = ft_strnew(ft_strlen(s));
	if (!newstr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (WHITESPACE(s[i]))
			   i++;
		while (!(WHITESPACE(s[i])) && ft_isalpha(s[i]))
			newstr[j++] = s[i++];
	}
	newstr[j] = s[i];
	return (newstr);
}
