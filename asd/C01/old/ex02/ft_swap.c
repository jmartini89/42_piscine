/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:46:42 by jmartini          #+#    #+#             */
/*   Updated: 2020/12/03 17:55:25 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;//variabile c = contenuto dell'indirizzo a (x)
	*a = *b;//contenuto indirizzo a (x) = contenuto indirizzo b (y) ; sovrascrivo x con y
	*b = c;//contenuto indirizzo b = variabile c ; sovrascrivo y con c
}

int		main(void)
{
	int x;
	int y;

	x = 8;
	y = 4;
	ft_swap(&x, &y);
	printf("%d, %d", x, y);
}
