/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manip_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:34:38 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 15:42:05 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//assigne a la value valeur l'index index et reindex toute la chaine
void	assigne_index(t_pile **a, int valeur, int index)
{
	t_pile	*current;

	current = *a;
	while (current != NULL)
	{
		if (current -> value > valeur)
			current -> index++;
		if (current -> value == valeur)
			current -> index = index;
		current = current -> suivant;
	}
}

int	value_min(t_pile *a)
{
	int	i;

	i = a -> value;
	while (a != NULL)
	{
		if (a -> value < i)
			i = a -> value;
		a = a -> suivant;
	}
	return (i);
}

//pour une valeur donnee renvoie l'index d'en dessous
int	tchek_min_index(t_pile **a, int valeur)
{
	t_pile	*tmp;
	int		min_val;
	int		index;

	tmp = *a;
	min_val = value_min(*a);
	index = 1;
	while (tmp != NULL)
	{
		if (tmp -> value >= min_val && tmp -> value < valeur)
		{
			min_val = tmp -> value;
			index = tmp -> index;
		}
		tmp = tmp -> suivant;
	}
	return (index);
}

void	print_index(t_pile *a)
{
	while (a != NULL)
	{
		ft_printf("%d\n", a -> index);
		a = a -> suivant;
	}
}
