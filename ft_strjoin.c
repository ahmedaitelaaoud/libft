/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:54:33 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/29 11:37:39 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new;
	size_t	i;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	if (!(new = malloc(len + 1)))
		return (NULL);
	while (s1[i] != '\0')
		*(new ++) = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		*(new ++) = s2[i++];
	new[i] = '\0';
	new -= len;
	return (new);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s \n", ft_strjoin("Ahmeds", " + Walid"));
// }