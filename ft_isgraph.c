/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:25:42 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/27 13:48:32 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** List of visible characters (idem as printable, but not space ' ')
*/

int		ft_isgraph(int c)
{
	if (33 <= c && c <= 126)
		return (1);
	else
		return (0);
}
