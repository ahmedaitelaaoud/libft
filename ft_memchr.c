/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:45:13 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/29 11:37:04 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	chr;
	unsigned char	*ptr;
	size_t			i;

	chr = (unsigned char)c;
	ptr = (unsigned char *)s;
	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (chr == ptr[i])
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
//  #include <stdio.h>
// // #include <string.h>

// int	main(void)
//  {
//  	int b = 300;
//  	char a  = 44;

//  	printf("%s\n", *(unsigned char *)ft_memchr(&a, b, 4));
// // 	printf("%p \n", memchr(&a, b, 4));
// }
