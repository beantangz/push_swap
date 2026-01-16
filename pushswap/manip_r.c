/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manip_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:21:21 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 15:40:48 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ra(t_pile **a)
{
	int		valeur;
	int		index;
	t_pile	*tmp;

	index = (*a)-> index;
	valeur = (*a)-> value;
	delete_pile_value(a, valeur);
	ajout_fin_pile(a, valeur);
	tmp = *a;
	while (tmp -> suivant != NULL)
		tmp = tmp -> suivant;
	tmp -> index = index;
}

void	rb(t_pile **b)
{
	int		valeur;
	int		index;
	t_pile	*tmp;

	valeur = (*b)-> value;
	index = (*b)-> index;
	delete_pile_value(b, valeur);
	ajout_fin_pile(b, valeur);
	tmp = *b;
	while (tmp -> suivant != NULL)
		tmp = tmp -> suivant;
	tmp -> index = index;
}

void	rr(t_pile **a, t_pile **b)
{
	ra(a);
	rb(b);
}
