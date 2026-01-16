/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manip_pile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:47:34 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/03 15:09:57 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_pile	*initialisation(int valeur)
{
	t_pile	*a;

	a = malloc(sizeof(t_pile));
	if (!a)
		return (NULL);
	a -> value = valeur;
	a -> index = 1;
	a -> suivant = NULL;
	return (a);
}

void	ajout_fin_pile(t_pile **head, int valeur)
{
	t_pile	*new;
	t_pile	*current;

	new = initialisation(valeur);
	if (!new)
		return ;
	if (*head == NULL)
	{
		*head = new;
		return ;
	}
	current = *head;
	while (current -> suivant != NULL)
		current = current -> suivant;
	current -> suivant = new;
}

void	ajout_debut_pile(t_pile **head, int valeur)
{
	t_pile	*new;

	new = initialisation(valeur);
	if (!new)
		return ;
	new -> suivant = *head;
	*head = new;
}

void	print_pile(t_pile *head)
{
	while (head != NULL)
	{
		ft_printf("%d -> ", head -> value);
		head = head -> suivant;
	}
	ft_printf("NULL\n");
}

void	delete_pile_value(t_pile **head, int valeur)
{
	t_pile	*temp;
	t_pile	*prev;

	if (*head == NULL)
		return ;
	temp = *head;
	prev = NULL;
	if (temp -> value == valeur)
	{
		*head = temp -> suivant;
		free(temp);
		return ;
	}
	while (temp != NULL && temp -> value != valeur)
	{
		prev = temp;
		temp = temp -> suivant;
	}
	if (temp == NULL)
		return ;
	prev -> suivant = temp -> suivant;
	free(temp);
}
