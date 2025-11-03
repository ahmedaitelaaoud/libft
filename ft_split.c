#include "libft.h"

static int word_count(char const *s, char c)
{
	int count = 0;
	int in_word = 0;
	int i = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return count;
}
static void *free_arr(char **arr, int i)
{
	while(--i >= 0)
		free(arr[i]);
	free(arr);
	return NULL;
}
static char **filling_arr(char c, const char *s, char **arr, int words)
{
	int i;
	int start;
	int end;

	i = 0;
	start = 0;
	while (i < words)
	{
		while (s[start] && s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		arr[i] = ft_substr(s,(unsigned int)start,(size_t) end -start);
		if (!arr[i])
			return(free_arr(arr, i));
		start = end + 1;
		i++;
	}
	arr[i] = NULL;
	return arr;
}
char	**ft_split(char const *s, char c)
{
	int words;
	char **splitted;
	if (!s)
		return NULL;
	if (!*s)
	{
		splitted = (char **)malloc(sizeof(char *));
		if(!splitted)
			return NULL;
		splitted[0] = NULL;
		return splitted;
	}
	words = word_count((char *)s, c);
	splitted = (char **)malloc((words + 1) * sizeof(char *));
	if (!splitted)
		return NULL;
	return (filling_arr(c, s, splitted, words));
}
#include <stdio.h>

int	main(void)
{
	char **splitted;
	int i;

	splitted = ft_split("hello Ahmed Iam your mac", ' ');
	if (!splitted)
		return (1);

	i = 0;
	while (splitted[i])
	{
		printf("%s\n", splitted[i]);
		i++;
	}
	i = 0;
	while (splitted[i])
		free(splitted[i++]);
	free(splitted);
	return (0);
}
