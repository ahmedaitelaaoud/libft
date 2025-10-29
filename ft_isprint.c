/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:19:54 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/19 16:34:13 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isprint(46));
	printf("%d\n", ft_isprint(128));
}*/
