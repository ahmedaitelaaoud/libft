/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:10:39 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/27 16:12:50 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;
	size_t	i;
	size_t	j;

	len_little = ft_strlen(little);
	i = 0;
	if (len_little == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (j < len_little && big[i + j] == little[j])
			j++;
		if (j == len_little)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
//     printf("%s\n", NULL);
// }
