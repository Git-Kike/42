/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:47:04 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/15 15:47:04 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, int lower)
{
	char	*numbers;
	char	buffer[9];
	int		count;
	int		i;

	if (lower == 1)
		numbers = "0123456789abcdef";
	else
		numbers = "0123456789ABCDEF";
	i = 0;
	count = 0;
	if (n == 0)
		return (ft_putchar('0'));
	while (n > 0)
	{
		buffer[i++] = numbers[n % 16];
		n /= 16;
	}
	while (i > 0)
	{
		ft_putchar(buffer[--i]);
		count++;
	}
	return (count);
}
/* int    main(void)
{
    ft_printf("Hexadecimal: %x\n", 42);
    ft_printf("Hexadecimal: %X\n", 42);
    return (0);
} */
