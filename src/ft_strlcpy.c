/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: marlou <marlou@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 17:05:24 by marlou        #+#    #+#                 */
/*   Updated: 2024/02/23 16:06:05 by mkootstr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	srclen;

	if (!src)
		return (0);
	srclen = ft_strlen(src);
	if (n > srclen)
		ft_memcpy(dest, src, srclen + 1);
	else if (n > 0 && src != NULL)
	{
		ft_memcpy(dest, src, n);
		dest[n - 1] = '\0';
	}
	return (srclen);
}
