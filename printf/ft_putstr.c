/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:52:38 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/15 15:52:38 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	if (str == NULL)
		return (ft_putstr("(null)"));
	i = 0;
	while (str[i] != '\0')
		i += ft_putchar(str[i]);
	return (i);
}

/* int	main(void)
{
    ft_printf("String: %s\n", "Hello, World!");
    return (0);
} */
