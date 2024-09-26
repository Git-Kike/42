/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:29:56 by eolivero          #+#    #+#             */
/*   Updated: 2024/09/26 18:23:21 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	const char	*str1 = "Hola";
	const char	*str2 = "Holanda";
	size_t		n = 4;

	int result = strncmp(str1, str2, n);

	if (result == 0) {
		printf("Las primeras %zu letras de las cadenas son iguales.\n", n);
	} else if (result < 0) {
		printf("'%s' es menor que '%s' en %zu letras.\n", str1, str2, n);
	} else {
		printf("'%s' es mayor que '%s' en %zu letras.\n", str1, str2, n);
	}

	return 0;
} */
