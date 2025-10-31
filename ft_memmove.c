/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:12:29 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/29 11:37:12 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if ((dest == src) || n == 0)
	{
		return (dest);
	}
	if (d > s)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int *ptr = malloc(sizeof(int));
	
	*ptr = 5555;
	ft_memmove(ptr + 2, ptr, 2);

	printf("%d\n", *ptr);
	//int ptr2 = 5555;
	//memmove(&ptr2 + 2, &ptr2, 2);
	//printf("%d\n", ptr2);
}
