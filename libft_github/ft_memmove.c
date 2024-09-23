/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:32:57 by eolivero          #+#    #+#             */
/*   Updated: 2024/09/23 14:36:04 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *memmove(void *dest, const void *src, size_t n)
{
	if (!dest || !src)
	{
		return NULL;
	}
	
	unsigned char *d;
	const unsigned char *s;
	
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;

	if (d < s || d >= s + n)
	{
		while (n --)
		{
			*d++ = *s++;
		}
	}
	
	else
	{
		d += n;
		s += n;
		while (n--)
		{
			*(--d) = *(--s);
		}
	}
	return dest;
}

int main()
{
	char buffer[] = "Hola, Mundo!";
	
	printf("Sin memmove: %s\n", buffer);

	memmove(buffer + 7, buffer + 6, 6);
	printf("Con memmove: %s\n", buffer);

	return 0;
}