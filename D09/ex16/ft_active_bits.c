/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:37:42 by rnugroho          #+#    #+#             */
/*   Updated: 2017/08/11 14:37:43 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_active_bits(int value)
{
	int one;

	one = 0;
	while (value > 0)
	{
		if (value % 2 == 1)
			one++;
		value = value / 2;
	}
	return (one);
}