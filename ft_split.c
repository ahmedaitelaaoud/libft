/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 10:09:35 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/28 15:37:38 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_str(char **s, size_t count_words)
{
	size_t i = 0;
	while (i < count_words)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static size_t	count_words(char *s, char c)
{
	size_t count = 0;
	size_t i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return count;
}

static char	*fill_word(const char *str, size_t start, size_t end)
{
	char *word;
	size_t len = end - start;
	if (!(word = malloc(len + 1)))
		return NULL;
	size_t i = 0;
	while(i < len)
	{
		word[i] = str[start + i];
		i++;
	}
	word[i] = '\0';
	return word;
}

char	**ft_split(char const *s, char c)
{
	size_t i = 0;
	size_t start = 0;
	size_t word_indx = 0;
	char **new;
	if (!(new = malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return NULL;
	new[count_words(s, c)] = NULL;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			new[word_indx] = fill_word(s, start, i);
		if (!new[word_indx])
		{
			free_str(new, word_indx);
			return NULL;
		}
		word_indx++;
	}
	new[word_indx] = NULL;
	return new;
}
#include <stdio.h>
int main()
{
	printf("%s\n", ft_split("hello, word, i am, Ahmed", ','));
}
