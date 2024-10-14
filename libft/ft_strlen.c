/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:28:08 by marvin            #+#    #+#             */
/*   Updated: 2024/09/17 19:28:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
/* int main()
{
	printf("%zu\n", ft_strlen("Hola")); // Debería imprimir 4
	printf("%zu\n", ft_strlen("")); // Debería imprimir 0
	printf("%zu\n", ft_strlen("Hola mundo")); // Debería imprimir 10
	return 0;
} */