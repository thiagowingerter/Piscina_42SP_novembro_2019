/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 11:34:26 by tcampos-          #+#    #+#             */
/*   Updated: 2019/12/02 18:22:35 by tcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void 	ft_putchar(char a)
{
	write(1,&a, 1);
}

void	ft_putnbr(int nb)
{
	int	calc=0;
	int flag=0;
	int count=0;

	calc = nb;


	while ( flag == 0)
	{
		ft_putchar((calc / 10) + '0');
		if ( calc > 9 )
		//	calc = nb / 10;
		ft_putchar((calc % 10 ) + '0');
		calc = nb /10;
		flag++;
	}
}
		


int		main(void)
{
	ft_putnbr(411);
	return(0);
}
