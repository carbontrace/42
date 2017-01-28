/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:20:20 by exam              #+#    #+#             */
/*   Updated: 2017/01/20 21:33:08 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int upper;
	int lower;
	char temp;

	lower = 0;
	upper = 0;
	while (str[upper])
		upper++;
	upper--;
	while (lower < upper)
	{
		temp = str[upper];
		str[upper] = str[lower];
		str[lower] = temp;
		lower++;
		upper--;
	}
	return(str);
}
