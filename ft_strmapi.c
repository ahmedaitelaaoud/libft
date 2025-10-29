/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ela <aait-ela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:40:13 by aait-ela          #+#    #+#             */
/*   Updated: 2025/10/27 18:03:34 by aait-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char to_upper_wrapper(unsigned int i, char c)
// {
//     (void)i; // index unused
//     return (char)ft_toupper((int)c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(new = malloc(ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
// #include <stdio.h>
// int main()
// {

//     printf("%s \n", ft_strmapi("hello",	to_upper_wrapper));
// }
