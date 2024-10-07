/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:31:24 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/07 11:59:20 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long nbr);
static char	*allocate_str(int len);

char	*ft_itoa(int n)
{
	long	nbr;
	int		len;
	char	*result;
	int		i;

	nbr = n;
	len = int_len(nbr);
	result = allocate_str(len);
	if (!result)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	i = len - 1;
	while (nbr > 0)
	{
		result[i--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

static char	*allocate_str(int len)
{
	char	*str;

	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (len == 1)
		str[0] = '0';
	return (str);
}

static int	int_len(long nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}
/* int main(void)
{
    char *result;

    // Prueba con un número positivo
    result = ft_itoa(1234);
    printf("Número 1234 convertido a cadena: %s\n", result);
    free(result); // Liberamos la memoria asignada

    // Prueba con un número negativo
    result = ft_itoa(-5678);
    printf("Número -5678 convertido a cadena: %s\n", result);
    free(result);

    // Prueba con el número 0
    result = ft_itoa(0);
    printf("Número 0 convertido a cadena: %s\n", result);
    free(result);

    // Prueba con INT_MAX
    result = ft_itoa(2147483647);
    printf("Número INT_MAX (2147483647) convertido a cadena: %s\n", result);
    free(result);

    // Prueba con INT_MIN
    result = ft_itoa(-2147483648);
    printf("Número INT_MIN (-2147483648) convertido a cadena: %s\n", result);
    free(result);

    return 0;
} */