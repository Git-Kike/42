/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:00:06 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/03 13:01:03 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str)
		ft_strlcpy(str, &s1[start], end - start + 1);
	return (str);
}

/* int	main(void)
{
	char	*s1 = "   Hola, Mundo!   ";
	char	*set = " ";
	char	*result;

	result = ft_strtrim(s1, set);
	if (result)
	{
		printf("Cadena original: '%s'\n", s1);
		printf("Cadena recortada: '%s'\n", result);
		free(result);
	}
	else
	{
		printf("Error: ft_strtrim devolvió NULL.\n");
	}
	return (0);
} */