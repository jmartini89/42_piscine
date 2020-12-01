/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspazzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:48:22 by lspazzin          #+#    #+#             */
/*   Updated: 2020/12/01 13:51:33 by lspazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int *last;

	temp = 0;
	last = tab + (size - 1);
	size = size / 2;
	while (size != 0)
	{
		temp = *tab;
		*tab = *last;
		*last = temp;
		tab++;
		last--;
		size--;
	}
}

int main(void)
{
	int tab[] = {798, 123, 456789, 12, 1};
	int size;
	int i;

	i = 0;
	size = 5;

	ft_rev_int_tab(tab, size);
	while (i != size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}