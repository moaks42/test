/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthiasoaks <matthiasoaks@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 22:37:24 by matthiasoak       #+#    #+#             */
/*   Updated: 2026/05/11 16:38:55 by moaks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	kuba;

	kuba = *a;
	*a = *a / *b;
	*b = kuba % *b;
}
int	main(void)
{
	int lala;
	int merlin;
	
	lala = 27;
	merlin = 5;
	ft_ultimate_div_mod(&lala, &merlin);
	printf("%i \n", lala);
	printf("%i \n", merlin);
	return 0;
}
