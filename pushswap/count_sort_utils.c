/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_sort_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:59:46 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 16:21:05 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	trie(int cost_down_a, int cost_down_b, int cost_up_a, int cost_up_b)
{
	int	cost_min_b;
	int	cost1;
	int	costup;
	int	costdown;
	int	costmin;

	cost_min_b = ft_min(cost_down_b, cost_up_b);
	if (cost_down_a == cost_up_a)
		return (ft_max(cost_down_a, ft_min(cost_down_b, cost_up_b)));
	if (ft_min(cost_down_a, cost_up_a) == cost_up_a)
		cost1 = cost_up_a + cost_down_b;
	if (ft_min(cost_down_a, cost_up_a) == cost_down_a)
		cost1 = cost_down_a + cost_up_b;
	costup = ft_max(cost_up_b, cost_up_a);
	costdown = ft_max(cost_down_b, cost_down_a);
	costmin = ft_min(ft_min(costup, costdown), cost1);
	return (costmin);
}

//parcourt a et renvoie l'elt qui necessite le moins 
// d'action pour que lui et son pote soit en haut
t_pile	*min_cost_a_elt(t_pile *a, t_pile *b)
{
	int		t;
	t_pile	*current;
	t_pile	*final;

	current = a;
	final = a;
	t = cost_put_both_to_the_top(current, a, b);
	while (current != NULL)
	{
		if (cost_put_both_to_the_top(current, a, b) < t)
		{
			t = cost_put_both_to_the_top(current, a, b);
			final = current;
		}
		current = current -> suivant;
	}
	return (final);
}
