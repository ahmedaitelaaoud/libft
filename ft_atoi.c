/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:27:31 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/29 11:35:47 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	i;

	if (!nptr)
		return (0);
	result = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		result = result * 10 + (nptr[i++] - '0');
	return (result * sign);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("123abc"));
// 	printf("%d\n", ft_atoi("           -12344444444abc"));
// 	printf("%d\n", ft_atoi(NULL));
// 	printf("%d\n", atoi("123abc"));
// 	printf("%d\n", atoi("           -12344444444abc"));
// 	printf("%d\n", atoi(NULL));
// }