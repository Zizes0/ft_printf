/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:05:06 by sel-kabo          #+#    #+#             */
/*   Updated: 2022/12/05 20:35:35 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int ft_check(va_list args, char sm)
{
	if (sm == 'u')
		return (ft_putnbr_uns(va_arg(args, unsigned int)));
	else if (sm == 'd' || sm == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (sm == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (sm == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (sm == '%')
		return (ft_putchar('%'));
	else if (sm == 'x' || sm == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), sm));
	else if (sm == 'p')
		return (ft_print_ptr(va_arg(args, long long)));
	return (0);
}

int ft_printf(const char *pt, ...)
{
	va_list	args;
	int i;
	int sum;
	int r;
	va_start(args, pt);
	i = 0;
	sum = 0;
	r = write(1, "", 0);
	if (r < 0)
		return (-1);
	while (pt[i])
	{
		if (pt[i] == '%')
		{
			sum += ft_check(args, pt[++i]);
		}
		else
		{
			ft_putchar(pt[i]);
			sum++;
		}
		i++;
	}
	va_end(args);
	return (sum);
}
int main()
{
	printf("\n%d\n", ft_printf("%d", 123));
}