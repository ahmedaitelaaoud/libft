/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isacii.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:24:07 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/19 16:31:30 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c >= 127);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isascii(5));
	printf("%d\n", ft_isascii(128));
	return (0);
}*/
