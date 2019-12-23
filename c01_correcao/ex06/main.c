/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 17:20:00 by tcampos-          #+#    #+#             */
/*   Updated: 2019/12/08 20:45:40 by tcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str);

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print(char *str)
{
	int c;
	int cc;

	cc = 0;
	c = ft_strlen(str);
	while (cc < c)
	{
		ft_putchar(str[cc]);
		cc++;
	}
}

/*char	ft_addvector(char *temp)
{
	char aux_vector[ft_strlen(temp)];
	int c;
	int cc;
	cc = 0;
	c = ft_strlen(temp);
	while (cc < c)
	{
		aux_vector[cc] = temp[cc];
		cc ++;
	}
	aux_vector[cc] = temp[cc];
	return (aux_vector);
}*/


int		main(void)
{
	char	vector[] = {"Oi eu sou o goku!"};

	printf("%d\n", ft_strlen(vector));
	ft_print(vector);
	return (0);
}
