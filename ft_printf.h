/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:17:58 by blozano-          #+#    #+#             */
/*   Updated: 2023/12/28 13:06:23 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

#define BASE_10
#define BASE_16

void	ft_putchar(char c);
void	ft_putstr(char *str);

int	ft_print (char simb);
int	ft_printf(char const *variable, ...);

# endif
