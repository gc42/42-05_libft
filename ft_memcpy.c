/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:13:46 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/27 14:57:00 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** memcpy -- copy memory area
** The memcpy() function copies n bytes from memory area src
** to memory area dst.
** If dst and src overlap, behavior is undefined.
** Applications in which dst and src might overlap
** should use memmove(3) instead.
**
** RETURN: The memcpy() function returns the original value of dst.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	// A TERMINER
	n++;
	return (0);
}
