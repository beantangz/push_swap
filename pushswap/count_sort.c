/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:33:44 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 16:17:42 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initb(t_pile **a, t_pile **b)
{
	pb(a, b);
	pb(a, b);
}

//retoune l'index au dessus duquel se mettre
int	find_index_under_in_b(t_pile *currenta, t_pile *b)
{
	int		i;
	int		max_index;
	t_pile	*tmp;

	tmp = b;
	i = 1;
	max_index = 0;
	while (tmp != NULL)
	{
		if ((tmp -> index < currenta -> index) && (tmp -> index >= i))
			i = tmp -> index;
		tmp = tmp -> suivant;
	}
	if (i == 1)
	{
		tmp = b;
		while (tmp != NULL)
		{
			if (tmp -> index > max_index)
				max_index = tmp -> index;
			tmp = tmp -> suivant;
		}
		return (max_index);
	}
	return (i);
}

int	count_come_up_to_top(t_pile *a, int index)
{
	int	i;

	i = 0;
	while (a -> index != index)
	{
		i++;
		a = a -> suivant;
	}
	return (i);
}

int	count_come_down_to_the_top(t_pile *a, int index)
{
	return (size_pile(a) - count_come_up_to_top(a, index));
}

//on va defiler toute la liste a avec cette fontion
//  qui donne le cout pour chaque elt de a
// pour etre mit lui et son pote au top de leurs piles respectives
int	cost_put_both_to_the_top(t_pile *currenta, t_pile *a, t_pile *b)
{
	int	index_under;
	int	c_u_a;
	int	c_d_a;
	int	c_d_b;
	int	c_u_b;

	index_under = find_index_under_in_b(currenta, b);
	c_u_a = count_come_up_to_top(a, currenta -> index);
	c_d_a = count_come_down_to_the_top(a, currenta -> index);
	c_u_b = count_come_up_to_top(b, index_under);
	c_d_b = count_come_down_to_the_top(b, index_under);
	if (ft_min(c_d_a, c_u_a) == c_d_a && ft_min(c_d_b, c_u_b) == c_d_b)
		return (ft_max(ft_min(c_d_a, c_u_a), ft_min(c_d_b, c_u_b)));
	if (ft_min(c_d_a, c_u_a) == c_u_a && ft_min(c_d_b, c_u_b) == c_u_b)
		return (ft_max(c_u_a, c_u_b));
	if (c_d_b == c_u_b)
		return (ft_max(ft_min(c_d_a, c_u_a), c_d_b));
	else
		return (trie(c_d_a, c_d_b, c_u_a, c_u_b));
}
