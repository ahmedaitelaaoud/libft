/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:02:13 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/27 18:05:27 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && nmemb > (((size_t)-1) / size))
		return (NULL);
	if (size == 0 || nmemb == 0)
		return (malloc(1));
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb);
	return (ptr);
}
// #include<stdio.h>
// int main()
// {
//     char *ptr;
//     ptr = ft_calloc(5, sizeof(char));
//     int i = 0;
//     while (i < 7)
//     {
//         printf("%d \n", ptr[i]);
//         i++;
//     }
//     free(ptr);
// }