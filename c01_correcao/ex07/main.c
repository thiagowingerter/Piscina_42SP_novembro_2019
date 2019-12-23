/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 21:29:49 by tcampos-          #+#    #+#             */
/*   Updated: 2019/12/09 08:02:50 by tcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
void	ft_print_vector(int *tab)
{
	int c = 0;
	while (c < 10)
	{
		printf("%d",tab[c]);
		c++;
	}
	printf("\n");
}

int		main(void)
{
	int v[10] = {0,1,6,3,4,5,2,7,8,9};
	ft_print_vector(v);
	ft_rev_int_tab(v, 10);
	ft_print_vector(v);
	return (0);
}
