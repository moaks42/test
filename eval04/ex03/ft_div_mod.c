/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthiasoaks <matthiasoaks@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 20:41:06 by matthiasoak       #+#    #+#             */
/*   Updated: 2026/05/11 16:38:18 by moaks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int		main(void)
{
	int bob;
	int karel;
	int div;
	int mod;
	char c;
	
	bob = 13;
	karel = 5;
	ft_div_mod(bob, karel, &div, &mod);
	printf("%i \n", div);
	printf("%i \n", mod);
	c = div + '0';
	write(1, &c, 1);
	c = mod + '0';
	write(1, &c, 1);
	return 0;
}
