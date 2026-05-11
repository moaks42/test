/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthiasoaks <matthiasoaks@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 20:15:30 by matthiasoak       #+#    #+#             */
/*   Updated: 2026/05/11 16:37:44 by moaks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	petr;

	petr = *a;
	*a = *b;
	*b = petr;
}
int main (void)
{
	int karel;
	int bob;

	karel = '7';
	bob = '6';
	ft_swap(&karel, &bob);
	write(1, &karel, 1);
	write(1, &bob, 1);
	return 0;
}
