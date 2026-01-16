/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manip_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:17:51 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 15:41:04 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rra(t_pile **a)
{
	int		valeur;
	int		index;
	t_pile	*current;

	current = *a;
	while ((current -> suivant) != NULL)
		current = current -> suivant;
	valeur = current -> value;
	index = current -> index;
	delete_pile_value(a, valeur);
	ajout_debut_pile(a, valeur);
	(*a)-> index = index;
}

void	rrb(t_pile **a)
{
	int		valeur;
	int		index;
	t_pile	*current;

	current = *a;
	while ((current -> suivant) != NULL)
		current = current -> suivant;
	valeur = current -> value;
	index = current -> index;
	delete_pile_value(a, valeur);
	ajout_debut_pile(a, valeur);
	(*a)-> index = index;
}

void	rrr(t_pile **a, t_pile **b)
{
	rra(a);
	rrb(b);
}
