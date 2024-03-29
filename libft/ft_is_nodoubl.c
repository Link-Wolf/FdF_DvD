/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_nodoubl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 09:48:29 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/03/11 10:29:41 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_nodoubl(int *tab, int size)
{
	while (--size)
	{
		if (*tab == *(tab + 1))
			return (0);
		tab++;
	}
	return (1);
}
