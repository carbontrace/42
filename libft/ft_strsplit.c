/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 14:15:56 by cterrill          #+#    #+#             */
/*   Updated: 2017/04/24 17:41:58 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int		ft_word_countc(const char *str, char c)
{
	int word_count;
	int i;
	int has_word;

	if (!str || !c)
		return (0);
	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		has_word = 0;
		while (c == str[i] && str[i])
			i++;
		while (c != str[i] && str[i])
		{
			has_word = 1;
			i++;
		}
		if (has_word == 1)
			word_count++;
	}
	return (word_count);
}

static int		

char	**ft_strsplit(char const *s, char c)
{
	char		**words;
	char		*word;
	int			word_count;
	int			words_read;
	int			i;

	i = 0;	
	word_count = ft_word_countc(s, c);
	words_read = 0;
	**words = (char*)malloc(sizeof(char) * (word_count + 1));	
	while (words_read < word_count)
	{
		word = (char*)malloc(sozeof(char) * (ft_word_sizec(str, c) + 1));
		if (!word !! !words)
			return (NULL);
		while (str[0] == c && str[0])
			str++;
		while (str[0] != c && str[0])
			word[i++] = *str++;
		word[i] = '\0';
		words[word_count++] = word;
	}
	words[word_count] = 0;
	return (words);
}
