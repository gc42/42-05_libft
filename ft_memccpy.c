/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 19:02:05 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/30 09:13:28 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** The memccpy() function copies bytes from string src to string dst.
** If the character c (as converted to an unsigned char) occurs in the
** string src, the copy stops and a pointer to the byte after the copy of
** c in the string dst is returned.  Otherwise, n bytes are copied, and a
** NULL pointer is returned.
**
** The source and destination strings should not overlap, as the behavior
** is undefined.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n && *(unsigned char*)src != (unsigned char)c)
	{
		*(unsigned char*)dst++ = *(unsigned char*)src++;
		n--;
	}
	if (n > 0)
	{
		*(unsigned char*)dst++ = *(unsigned char*)src++;
		return (dst);
	}
	return (NULL);
}
