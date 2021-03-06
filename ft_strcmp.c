/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:54:50 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/06 20:19:43 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
** man 3 STRCMP
** strcmp() -- compare strings
**
** The strcmp() and strncmp() functions lexicographically compare the null-
** terminated strings s1 and s2.
**
** RETURN The strcmp() functions return an integer greater than,
** qual to, or less than 0, according as the string s1 is greater than,
** equal to, or less than the string s2.  The comparison is done using
** unsigned characters, so that `\200' is greater than `\0'.
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
}
