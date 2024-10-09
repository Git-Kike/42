/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:23:33 by marvin            #+#    #+#             */
/*   Updated: 2024/09/27 11:23:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}
/* int main()
{
	printf("%s\n", ft_strrchr("Hola hola", 'a')); // Debería imprimir a
	printf("%s\n", ft_strrchr("Hola hola", 'o')); // Debería imprimir ola
	printf("%s\n", ft_strrchr("Hola hola", 'H')); // Debería imprimir Hola
	printf("%s\n", ft_strrchr("Hola hola", 'l')); // Debería imprimir la
	printf("%s\n", ft_strrchr("Hola hola", 'z')); // Debería imprimir (null)
	return 0;
} */
