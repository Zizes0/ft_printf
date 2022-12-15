/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:35:22 by sel-kabo          #+#    #+#             */
/*   Updated: 2022/12/15 17:02:10 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_print_hex(unsigned int num, const char format);
int		ft_printf(const char *pt, ...);
int		ft_putchar(char a);
int		ft_putnbr(long n);
int		ft_putnbr_uns(unsigned int n);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *s);
int		ft_print_ptr(unsigned long long ptr);

#endif
