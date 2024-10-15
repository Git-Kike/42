/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:48:30 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/15 15:48:30 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		count += ft_putnbr(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}
/* int    main(void)
{
    ft_printf("Number: %d\n", 42);
    ft_printf("Number: %d\n", -42);
    return (0);
} */
