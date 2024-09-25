/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:11:59 by marvin            #+#    #+#             */
/*   Updated: 2024/09/18 19:11:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)b;
	value = (unsigned char)c;
	while (len--)
		*ptr++ = value;
	return (b);
}

/* int main()
{
	char str[50] = "Hello World!";
	printf("Sin memset(): %s\n", str);
	ft_memset(str, 'a', 5);
	printf("Con memset(): %s\n", str);
	return 0;
} */