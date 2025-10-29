/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:13:04 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/22 22:13:12 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}
// #include <stdio.h>
// #include<string.h>
// int	main(void)
// {
// 	printf("%zu\n", ft_strlen(NULL));
// 	printf("%zu\n", strlen(NULL));
// 	return (0);
// }
