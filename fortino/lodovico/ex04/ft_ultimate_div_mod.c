/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspazzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:57:11 by lspazzin          #+#    #+#             */
/*   Updated: 2020/12/01 13:43:58 by lspazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tempa;
	int tempb;

	tempa = *a;
	tempb = *b;
	*a = tempa / tempb;
	*b = tempa % tempb;
}

int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 4;
	ft_ultimate_div_mod(&a, &b); // & indirizzo di memoria!
	printf("div=%d, mod=%d", a, b);
}