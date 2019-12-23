/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 11:34:26 by tcampos-          #+#    #+#             */
/*   Updated: 2019/12/02 17:45:17 by tcampos-         ###   ########.fr       */
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
		calc = nb /  10; //42 4
		if (calc <= 9 )
		{
			ft_putchar(calc + '0'); // imprime o 1 caractere
			flag++;
		}
		else
			count++;	//1
	}
	//ft_putchar('\n');
	//ft_putchar(calc);
	ft_putchar('\n');
	ft_putchar(flag);
			if (count > 9 )
			{
				ft_putchar((count / 10) + '0');
				ft_putchar((count % 10) + '0');
			}
			else
			ft_putchar((nb % 10) + '0'); //imprime o ultimo caracter se o contador < 9 
}


int		main(void)
{
	ft_putnbr(41);
	return(0);
}
