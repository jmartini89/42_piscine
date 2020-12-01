/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspazzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:08:42 by lspazzin          #+#    #+#             */
/*   Updated: 2020/12/01 13:42:40 by lspazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int tempa;
	int tempb;

	tempa = a;
	tempb = b;
	*div = tempa / tempb;
	*mod = tempa % tempb;
}

int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 4;
	ft_div_mod(a, b, &div, &mod); // & indirizzo di memoria!
	printf("div=%d, mod=%d", div, mod);
}