/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:34:07 by exam              #+#    #+#             */
/*   Updated: 2016/11/18 13:22:36 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_strcomp(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str1[i] != '\0' && str2[j] != '\0')
	{
		if (str1[i] == str2[j])
		{
			j++;
			i++;
		}
		if (str1[i] != str2[j])
			j++;
		if (str1[i] == '\0' && str2[j] != '\0')
			ft_putstr(str1);
		if (str1[i] == '\0' && str2[j] == '\0')
			 ft_putstr(str1);
	}
}
int main(int argc, char **argv)
{
	char *str1;
	char *str2;

	str1 = argv[argc - 2];
	str2 = argv[argc - 1];
	if  (argc > 1)
	{
		ft_strcomp(str1,str2);
		write(1, "\n", 1);
	}
	else if (argc < 2)
		write(1, "\n", 1);
	return (0);
}
