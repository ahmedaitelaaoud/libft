/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:44:36 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/29 11:37:15 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	u;
	size_t			i;

	ptr = (unsigned char *)s;
	u = (unsigned char)c;
	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		ptr[i] = u;
		i++;
	}
	return (s);
}
