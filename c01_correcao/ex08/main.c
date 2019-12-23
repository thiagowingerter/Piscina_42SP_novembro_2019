/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 03:04:45 by tcampos-          #+#    #+#             */
/*   Updated: 2019/12/09 06:28:06 by tcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);
void	ft_print_vector(int *tab, int size)
{
	int c = 0;
	while (c < size)
	{
		printf("%d ",tab[c]);
				c++;
	}
	printf("\n");
}

int		main(void)
{
	int v[10] = {-3,10,2,35,14,-5,6,77,-8,0};
	ft_print_vector(v, 10);
	ft_sort_int_tab(v, 10);
	ft_print_vector(v, 10);
	return (0);
}
