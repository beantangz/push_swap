/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:39:27 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 16:45:08 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile	*ft_fill_a(char **av)
{
	int		i;
	int		j;
	t_pile	*a;

	a = initialisation(ft_atoi(av[0]));
	i = 1;
	while (av[i])
	{
		j = ft_atoi(av[i]);
		ajout_fin_pile(&a, j);
		if (value_min(a) == j)
			assigne_index(&a, j, 1);
		else
			assigne_index(&a, j, tchek_min_index(&a, j) + 1);
		i++;
	}
	return (a);
}

int	size_pile(t_pile *a)
{
	int	i;

	i = 0;
	while (a != NULL)
	{
		i++;
		a = a -> suivant;
	}
	return (i);
}

int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
