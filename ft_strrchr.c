/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:18:20 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/29 11:38:04 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	int		i;

	i = ft_strlen(s);
	cc = (char)c;
	if (!s)
		return (NULL);
	while (i >= 0)
	{
		if (s[i] == cc)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}
