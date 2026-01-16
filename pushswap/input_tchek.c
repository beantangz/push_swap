/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_tchek.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:42:09 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 16:49:10 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	tchek_input(char **av)
{
	int	i;
	int	nbzero;

	i = 0;
	nbzero = 0;
	while (av[i])
	{
		if (isnumber(av[i]) != 0)
			return (1);
		if (iszero(av[i]) == 0)
			nbzero++;
		if (iszero(av[i]) != 0 && ft_atoi(av[i]) == 0)
			return (1);
		i++;
	}
	if (haveduplicates(av) != 0)
		return (1);
	if (nbzero > 1)
		return (1);
	return (0);
}
