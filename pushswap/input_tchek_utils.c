/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_tchek_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:58:23 by mleineku          #+#    #+#             */
/*   Updated: 2025/06/04 13:38:58 by mleineku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sign(char c)
{
	if (c == '+' || c == '-')
		return (0);
	return (1);
}

int	isnumber(char *av)
{
	int	i;

	i = 0;
	if (is_sign(av[i]) == 0 && av[i] != '\0')
		i++;
	while (ft_isdigit(av[i]) == 1)
		i++;
	if (av[i] != '\0')
		return (1);
	return (0);
}

int	iszero(char *av)
{
	int	i;

	i = 0;
	if (is_sign(av[i]) == 0)
		i++;
	while (av[i] == '0')
		i++;
	if (av[i] != '\0')
		return (1);
	return (0);
}

int	cmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s1[i] == '+')
	{
		if (s2[j] != '+')
			i++;
	}
	else
	{
		if (s2[j] == '+')
			j++;
	}
	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

int	haveduplicates(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (cmp(av[i], av[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
