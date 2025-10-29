/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:10:43 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/29 11:37:07 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (!s1 || !s2)
		return (0);
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *s2 = "helloa";
// 	char *s1 = "hello";
// 	printf("%d \n", ft_memcmp(s1, s2, 6));
// 	printf("%d \n", memcmp(s1, s2, 6));
// 	printf("%s \n", ft_memcmp(NULL, s2, 6));
// 	printf("%s \n", memcmp(NULL, s2, 6));
// 	// 	printf("%d \n", ft_memcmp("hello", "helloa", 6));
// 	// 	printf("%d \n", memcmp("helloa", "hello", 6));
// }