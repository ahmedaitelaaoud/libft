/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:56:57 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/27 18:01:53 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int nb)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		len++;
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}
static char	*fill(char *str, long nb, size_t len)
{
	str[len] = '\0';
	if (nb == 0)
		str[len - 1] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[len - 1] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}
static char	*ft_itoa(int n)
{
	char	*new;
	long	nb;
	size_t	len;

	nb = n;
	len = ft_intlen(nb);
	if (!(new = malloc(len + 1)))
		return (NULL);
	fill(new, nb, len);
	return (new);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s \n", ft_itoa(0));
// }
