/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:29:56 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/08 01:55:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/* int main()
{
	char s1[] = "Hello";
	char s2[] = "Hello";
	size_t n = 5;
	printf("%d\n", ft_strncmp(s1, s2, n)); // Debería imprimir 0
	return 0;
} */
