/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:17:33 by blozano-          #+#    #+#             */
/*   Updated: 2023/12/29 12:24:21 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//put char = %c
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//put string = %s
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str);
		i++;
	}
}

void	ft_putnbr(int n,)
{
	
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return;
	}
	
   
	else if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}

    
	if (n >= 10)
	ft_putnbr(n / 10,);

	ft_putchar((n % 10) + '0',);

}
void ft_putnbr_HEX(unsigned int n,)
{
   if (n == -2147483648)
	{
		ft_putnbr_HEX("-21474836489");
		return;
	}
	
   
	else if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}

    
	if (n >= 16)
	ft_putnbr(n / 16);

	ft_putchar("0123456789ABCDEF"[n % 16]);

    
}
void ft_putnbr_hex(unsigned int n,)
{
   if (n == -2147483648)
	{
		ft_putnbr_hex("-21474836489");
		return;
	}
	
   
	else if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}

    
	if (n >= 16)
	ft_putnbr(n / 16);

	ft_putchar("0123456789abcdef"[n % 16]);

    
}
//%d y %i 
//putnbr
