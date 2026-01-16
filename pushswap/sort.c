/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:58:53 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/04 13:44:30 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_pile **a, t_pile **b)
{
	int		elu;
	int		index_b;
	t_pile	*min_a;

	min_a = min_cost_a_elt(*a, *b);
	index_b = find_index_under_in_b(min_a, *b);
	elu = wich_sort(*a, *b, min_a, cost_put_both_to_the_top(min_a, *a, *b));
	if (elu == 0)
	{
		while ((*b)-> index != index_b)
			do_rr(a, b);
		while ((*a) != min_a)
			do_ra(a);
	}
	if (elu == 1)
	{
		while ((*b)-> index != index_b)
			do_rrr(a, b);
		while ((*a) != min_a)
			do_rra(a);
	}
	else
		sort2(min_a, index_b, a, b);
}

void	sort2(t_pile *min_a, int index_b, t_pile **a, t_pile **b)
{
	int	elu;

	elu = wich_sort(*a, *b, min_a, cost_put_both_to_the_top(min_a, *a, *b));
	if (elu == 2)
	{
		while ((*a) != min_a)
			do_rr(a, b);
		while ((*b)-> index != index_b)
			do_rb(b);
	}
	if (elu == 3)
	{
		while ((*a) != min_a)
			do_rrr(a, b);
		while ((*b)-> index != index_b)
			do_rrb(b);
	}
	else
		sort3(min_a, index_b, a, b);
}

void	sort3(t_pile *min_a, int index_b, t_pile **a, t_pile **b)
{
	int	elu;

	elu = wich_sort(*a, *b, min_a, cost_put_both_to_the_top(min_a, *a, *b));
	if (elu == 4)
	{
		while ((*a) != min_a)
			do_ra(a);
		while ((*b)-> index != index_b)
			do_rrb(b);
	}
	if (elu == 5)
	{
		while ((*a) != min_a)
			do_rra(a);
		while ((*b)-> index != index_b)
			do_rb(b);
	}
}

void	sorta(t_pile **a)
{
	int	index_min;
	int	sort;

	index_min = find_min_index(*a);
	sort = wich_sort_a(index_min, *a);
	if (sort == 0)
	{
		while ((*a)-> index != index_min)
			do_ra(a);
	}
	if (sort == 1)
	{
		while ((*a)-> index != index_min)
			do_rra(a);
	}
}

int	is_sorted(t_pile *a)
{
	if (a -> index != find_min_index(a))
		return (1);
	while (a -> suivant != NULL)
	{
		if (a -> index > a -> suivant -> index)
			return (1);
		a = a -> suivant;
	}
	return (0);
}
