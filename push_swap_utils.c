/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:06:56 by fmalizia          #+#    #+#             */
/*   Updated: 2022/04/11 16:02:53 by fmalizia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	l_no_spc(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[0] == ' ')
		++i;
	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			++count;
		++i;
	}
	if (str[i - 1] == ' ')
		count--;
	return (count + 1);
}

void	c_to_i(char	*str, int *stack)
{
	int		i;
	int		j;
	char	**nbr;

	i = 0;
	nbr = ft_split(str, ' ');
	while (nbr[i])
	{
		stack[i] = ft_atoi(nbr[i]);
		free(nbr[i]);
		++i;
	}
}
