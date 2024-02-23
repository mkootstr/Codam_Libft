/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkootstr <mkootstr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:36:28 by mkootstr      #+#    #+#                 */
/*   Updated: 2024/02/23 16:05:14 by mkootstr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *dest, const void *src, int a, size_t n)
{
	size_t			i;
	const char		*sorc;
	unsigned char	*dst;

	i = 0;
	sorc = (const char *)src;
	dst = (unsigned char *)dest;
	while (n != 0)
	{
		dst[i] = sorc[i];
		i++;
		n--;
		if (dst[i - 1] == (unsigned char)a)
			return (dest + i);
	}
	return (NULL);
}
