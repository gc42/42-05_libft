/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:30:15 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/23 15:27:50 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** List of punctuation characters in standard ascii table
*/
int		ft_ispunct(int c)
{
	if ((33  <= c && c <= 47) \
		|| (58  <= c && c <= 64) \
		|| (91  <= c && c <= 96) \
		|| (123  <= c && c <= 126))
		return (1);
	else
		return (0);
}
