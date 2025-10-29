/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:38:33 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/27 18:05:39 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (!(new = malloc(len + 1)))
		return (NULL);
	i = 0;
	while (i < len && s[i + start])
	{
		new[i] = s[i + start];
		i++;
	}
	new[i] = '\0';
	return (new);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s \n", ft_substr("Bonjour comment ca va?", 3, 100));

// }
