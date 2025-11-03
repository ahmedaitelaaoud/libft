/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:56:57 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/29 11:37:01 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_intlen(int nb)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb != 0)
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

char	*ft_itoa(int n)
{
	char	*new;
	long	nb;
	size_t	len;

	nb = n;
	len = ft_intlen(nb);
	new = malloc(len + 1);
	if (!new)
		return (NULL);
	fill(new, nb, len);
	return (new);
}
