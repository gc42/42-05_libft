/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:11:35 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/27 16:11:17 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** In list of uppercase characters in standard ascii table
*/

int		ft_isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}
