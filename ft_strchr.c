/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:12:03 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/29 11:37:31 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;
	char	*d;
	size_t	i;

	d = (char *)s;
	cc = (char)c;
	i = 0;
	while (d[i])
	{
		if (cc == d[i])
			return (&d[i]);
		i++;
	}
	if (cc == '\0')
		return (&d[i]);
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = "hello";
// 	char *a;

// 	a = ft_strchr(s, '\0');
// 	printf("%s", a);
// }