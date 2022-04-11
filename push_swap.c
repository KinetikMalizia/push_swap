/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:32:34 by fmalizia          #+#    #+#             */
/*   Updated: 2022/04/11 16:04:49 by fmalizia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"

int	main(int ac, char **av)
{
	int	*stack_a;
	int	*stack_b;
	int	amount;

	amount = l_no_spc(av[1]);
	stack_a = malloc(amount * sizeof(int));
	stack_b = malloc(amount * sizeof(int));
	if (ac < 3)
		c_to_i(av[1], stack_a);

}
