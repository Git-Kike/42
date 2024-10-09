/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:54:33 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/09 19:42:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}
/* int main()
{
	printf("%s\n", ft_strchr("Hola hola", 'a')); // Debería imprimir a hola
	printf("%s\n", ft_strchr("Hola hola", 'o')); // Debería imprimir ola hola
	printf("%s\n", ft_strchr("Hola hola", 'H')); // Debería imprimir Hola hola
	printf("%s\n", ft_strchr("Hola hola", 'l')); // Debería imprimir la hola
	printf("%s\n", ft_strchr("Hola hola", 'z')); // Debería imprimir (null)
	return 0;
} */