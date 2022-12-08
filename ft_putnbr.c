/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:04:39 by sel-kabo          #+#    #+#             */
/*   Updated: 2022/12/05 19:56:51 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(long n)
{
	if (n < 0)
		return (ft_putchar('-') + ft_putnbr(-n));
	else if (n >= 10)
	{
		return (ft_putnbr(n / 10) + ft_putchar(n % 10 + '0'));
	}
	else
		return (ft_putchar(n + '0'));
}

