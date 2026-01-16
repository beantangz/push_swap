/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manip_s_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:47:36 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 15:40:33 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sa(t_pile **a)
{
	int	valeur;
	int	index;

	if (((*a) == NULL) || ((*a)-> suivant == NULL))
		return ;
	valeur = (*a)-> suivant -> value;
	index = (*a)-> suivant -> index;
	delete_pile_value(a, valeur);
	ajout_debut_pile(a, valeur);
	(*a)-> index = index;
}

void	sb(t_pile **b)
{
	int	valeur;
	int	index;

	if (((*b) == NULL) || ((*b)-> suivant == NULL))
		return ;
	valeur = (*b)-> suivant -> value;
	index = (*b)-> suivant -> index;
	delete_pile_value(b, valeur);
	ajout_debut_pile(b, valeur);
	(*b)-> index = index;
}

void	ss(t_pile **a, t_pile **b)
{
	sa(a);
	sa(b);
}

void	pa(t_pile **a, t_pile **b)
{
	int	valeur;
	int	index;

	if ((*b) == NULL)
		return ;
	valeur = (*b)-> value;
	index = (*b)-> index;
	ajout_debut_pile(a, valeur);
	(*a)-> index = index;
	delete_pile_value(b, valeur);
}

void	pb(t_pile **a, t_pile **b)
{
	int	valeur;
	int	index;

	if ((*a) == NULL)
		return ;
	valeur = (*a)-> value;
	index = (*a)-> index;
	ajout_debut_pile(b, valeur);
	(*b)-> index = index;
	delete_pile_value(a, valeur);
}
