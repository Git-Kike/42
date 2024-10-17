/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:54:26 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/15 15:54:26 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count += ft_putuns(n / 10);
	}
	count += ft_putchar(n % 10 + '0');
	return (count);
}
/* int	main(void)
{
	ft_printf("Unsigned number: %u\n", 42);
	return (0);
} */
