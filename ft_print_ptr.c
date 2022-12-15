/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:05:26 by sel-kabo          #+#    #+#             */
/*   Updated: 2022/12/15 17:03:28 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

int	ft_put_ad(unsigned long long num)
{
	int	t;

	t = 0;
	if (num >= 16)
	{
		ft_put_ad(num / 16);
		ft_put_ad(num % 16);
	}
	else
	{
		if (num <= 9)
			return (ft_putchar((num + '0')));
		else
			return (ft_putchar((num - 10 + 'a')));
	}
	return (0);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	print_length;

	print_length = 0;
	print_length += write(1, "0x", 2);
	if (ptr == 0)
		print_length += write(1, "0", 1);
	else
	{
		ft_put_ad(ptr);
		print_length += ft_ptr_len(ptr);
	}
	return (print_length);
}
