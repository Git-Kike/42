/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:12:29 by eolivero          #+#    #+#             */
/*   Updated: 2024/09/30 13:38:05 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
/* int	main(void)
{
	const char	*haystack = "Hola, este es un ejemplo simple.";
	const char	*needle = "ejemplo";
	char		*result;

	result = ft_strnstr(haystack, needle, 30);
	if (result != NULL)
		printf("Subcadena encontrada: '%s'\n", result);
	else
		printf("Subcadena no encontrada\n");

	return (0);
} */