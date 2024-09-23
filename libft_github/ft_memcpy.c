/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:46:30 by eolivero          #+#    #+#             */
/*   Updated: 2024/09/23 11:54:35 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
 */
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char *s;
	unsigned char *d;
	size_t i;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	
	return dest;
}

/* int main()
{
	char source[] = "Hola";
	char destination[20];
	
	ft_memcpy(destination, source, 5);
	
	printf("Fuente: %s\n", source);
	printf("Destino: %s\n", destination);

	return 0;
} */