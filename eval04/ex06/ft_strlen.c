/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaks <moaks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 14:32:23 by moaks             #+#    #+#             */
/*   Updated: 2026/05/11 16:44:07 by moaks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	pepa;

	pepa = 0;
	while (str[pepa] != '\0')
	{
		pepa++;
	}
	return (pepa);
}
int	main(void)
{
    int lol;
    char    karel[50] = "I'm under the water, pls help me.";
    
    lol = ft_strlen(karel);
    printf("%d \n", lol);
    return 0;
}

