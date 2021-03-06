/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:22:52 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/27 13:48:06 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** List of blank characters ('\t' and ' ')
*/

int		ft_isblank(int c)
{
	if (c == 9 || c == 32)
		return (1);
	else
		return (0);
}
