/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:58:28 by jmartini          #+#    #+#             */
/*   Updated: 2020/12/03 18:34:14 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	// div 10 / 4 = 2 ; mod 10 % 4 = 2 ;
	// a / b --> div to div, mod to mod
	int a;
	int b;
	int div;
	int mod;

	a = 74;
	b = 12;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d", div, mod);
}
