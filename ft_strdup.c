/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:55:55 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/29 11:37:34 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(new = malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (*s)
		new[i++] = *(s++);
	new[i] = '\0';
	return (new);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *s = NULL;
//     char *d = ft_strdup(s);
//     printf("%s \n", d);
//     free(d);
// }