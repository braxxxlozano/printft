/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:17:15 by blozano-          #+#    #+#             */
/*   Updated: 2023/12/29 12:45:49 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

//va_arg(args, char)
// cspdiuxX
int	ft_checking(char simb, va_list args, int byte)
{
	if (simb == 'c')
		ft_putchar(va_arg(args, char, byte));
	else if (simb == 's')
		ft_putstr(va_arg(args, char), byte);
	else if (simb == 'p')
	{
		write(1, "0x", 2);
		ft_putstr(va_arg(args,int), byte);
	}
	else if (simb == 'd')
		ft_putnbr(va_arg(args,int), byte);
	else if (simb == 'i')
		ft_putnbr(va_arg(args,int), byte);
	else if (simb == 'u')
		ft_putnbr(va_arg(args,unsigned int), byte);
	else if (simb == 'x')
		ft_putnbr_hex(va_arg(args,unsigned int), byte);
	else if (simb == 'X')
		ft_putnbr_HEX(va_arg(args,unsigned int), byte);
	else if (simb == '%')
		write(1, '%', 1);
	return (simb);
}

 int	ft_printf(char const *variable, ...)
 	
{
 	va_list args;
 	int i;
 	i = -1;
	int	byte;
	byte = 0;
 	while (variable[++i])
	{
 		if (variable[i] == '%')
		{	
			i++;
 			ft_checking(variable[i], args, byte);
		}
 		write (1, &variable[i] , 1);

 	}return (variable[++i]);//ft_print("klnsclkn %c", char);
}


/* while (variable[i])
{
	if ( variable[i] == '%')
		ft_print(variable[i++ + 1], args);
	else
		putchar
	i++;
}
va_end(args); */

int main (void)
{
	char const *variable;
	variable = 0;
	ft_printf("hola mundo %c", variable);
	return(0);
}

 

