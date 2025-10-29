/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:03:13 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/29 11:38:16 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_toupper('2'));
	printf("%d\n", ft_toupper('a'));
	printf("%d\n", ft_toupper('Z'));
}*/
