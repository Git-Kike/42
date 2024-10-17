/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:49:45 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/15 15:49:45 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpun(void *ptr)
{
	unsigned long long	address;
	char				buffer[19];
	const char			*hex_digits;
	int					i;

	hex_digits = "0123456789abcdef";
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	address = (unsigned long long)ptr;
	buffer[18] = '\0';
	i = 17;
	while (address > 0)
	{
		buffer[i--] = hex_digits[address % 16];
		address /= 16;
	}
	buffer[i--] = 'x';
	buffer[i] = '0';
	return (ft_putstr(&buffer[i]));
}
/* int	main(void)
{
    int		*ptr;

    ptr = NULL;
    ft_printf("Pointer: %p\n", ptr);
    return (0);
} */
