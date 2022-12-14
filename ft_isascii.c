/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:41:58 by aschaefe          #+#    #+#             */
/*   Updated: 2022/09/12 23:44:15 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/******************************************************************************
	Determines if an integer is an ascii charcter
		Return : 
			1 if right
			0 if false
******************************************************************************/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
