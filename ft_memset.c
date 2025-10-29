/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:44:36 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/29 11:37:15 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	u;
	size_t			i;

	ptr = (unsigned char *)s;
	u = (unsigned char)c;
	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		ptr[i] = u;
		i++;
	}
	return (s);
}
// #include <stdio.h>
// int main()
// {
// 	char *a = ft_memset(NULL, 5, 2);
// 	printf("1");
// }
/*#include <stdio.h>

int	main(void)
{
	unsigned char tt = 255;
	tt = tt +1;
	printf("%c\n",tt);
	/*char	str[] = "hygugugjhg";
	char	*move;
	int		i;
	//*(move + 1);

	// printf("%d\n", b);
	move = malloc(sizeof(str)+1);
	i = 0;
	while (i < sizeof(str))
	{
		ft_memset(move + i, str[i], 1);
		i++;
	}
	printf("%s\n", move);/*
}*/
