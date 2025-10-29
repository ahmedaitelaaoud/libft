/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:18:20 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/19 22:56:37 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*d;
	char	cc;
	int		i;

	i = ft_strlen(s);
	d = (char *)s;
	cc = (char)c;
	while (i >= 0)
	{
		if (d[i] == cc)
		{
			return (&d[i]);
		}
		i--;
	}
	return (NULL);
}
/*#include <stdio.h>

int	main(void)
{
	char s[] = "";
	char *a;

	a = ft_strrchr(s, 'H');
	printf("%s", a);
}*/