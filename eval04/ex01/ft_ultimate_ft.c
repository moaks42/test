/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaks <moaks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 20:50:52 by moaks             #+#    #+#             */
/*   Updated: 2026/05/11 16:35:50 by moaks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int main (void)
{
	int i;

	int *karel = &i;
	int **pepa = &karel;
	int ***franta = &pepa;
	int ****lucka = &franta;
	int *****matus = &lucka;
	int ******rory = &matus;
	int *******matty = &rory;
	int ********merlin = &matty;
	int *********zuzana = &merlin;
	ft_ultimate_ft(zuzana);
	write(1, &i, 1);
	return 0;
}
