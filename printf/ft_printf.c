/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:56:13 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/15 15:56:13 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	converter(char c, va_list var_args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(var_args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(var_args, char *)));
	else if (c == 'p')
		return (ft_putpun(va_arg(var_args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(var_args, int)));
	else if (c == 'u')
		return (ft_putuns(va_arg(var_args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(var_args, unsigned int), 1));
	else if (c == 'X')
		return (ft_puthex(va_arg(var_args, unsigned int), 0));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (ft_putchar(c));
}

int	ft_printf(const char *str, ...)
{
	va_list	var_args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(var_args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] != '\0')
				count += converter(str[i], var_args);
			else
				count += ft_putchar('%');
		}
		else
		{
			count += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(var_args);
	return (count);
}
