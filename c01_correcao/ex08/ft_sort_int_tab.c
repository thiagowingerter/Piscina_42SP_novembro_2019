/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 02:38:15 by tcampos-          #+#    #+#             */
/*   Updated: 2019/12/09 06:26:19 by tcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int flag;
	int swap;
	int c;

	flag = 1;
	while (flag != 0)
	{
		c = size - 1;
		swap = 0;
		flag = 0;
		while (c > 0)
		{
			if (tab[c] < tab[c - 1])
			{
				swap = tab[c - 1];
				tab[c - 1] = tab[c];
				tab[c] = swap;
				flag++;
				swap = 0;
			}
			c--;
		}
	}
}
