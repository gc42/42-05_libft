/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 16:31:08 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/29 18:18:13 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** man 3 strstr
**
** The strstr() function locates the first occurrence of the null-termi-
** nated string needle in the string haystack.
**
** RETURN
** If needle is an empty string, haystack is returned;
** if needle occurs nowhere in haystack, NULL is returned;
** otherwise a pointer to the first character of the first occurrence
** of needle is returned.
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;

	i = 0;
	while (haystack[i] == needle[i] && haystack[i] && needle[i])
		i++;
	if (needle[i] == '\0')
		return ((char *)haystack);
	if (haystack[i] == '\0')
		return (0);
	return (ft_strstr(haystack + 1, needle));
}
