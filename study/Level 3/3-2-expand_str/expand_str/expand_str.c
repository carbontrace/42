/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 14:33:34 by exam              #+#    #+#             */
/*   Updated: 2016/11/18 15:02:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i)
{
	while (i > 0)
	{
		write(1, " ", 1);
		i--;
	}
}

int 	blankspc(char *word, int i)
{
	while (word[i]== ' ' || word[i] == '\v' || word[i] == '\n' ||
			word[i] == '\f' || word[i] == '\r' || word[i] == '\t')
			i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int i;
	int temp;
	char *word;
	
	i = 0;
	word = argv[1];
	while (argc == 2)
	{
		i = blankspc(word, i);
		while (word[i] != '\0')
		{
			write(1, &word[i], 1);
			i++;
			temp = blankspc(word, i);
			if (i != temp)
			{
				if (word[temp] == '\0')
					break;
				i = temp;
				ft_putchar(3);
			}
		}
		break;
	}
	write(1, "\n", 1);
	return (0);
}
