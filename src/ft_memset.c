/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkootstr <mkootstr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 13:26:08 by mkootstr      #+#    #+#                 */
/*   Updated: 2024/02/23 16:05:29 by mkootstr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *str, unsigned char a, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	s1 = str;
	i = 0;
	while (n != 0)
	{
		s1[i] = a;
		i++;
		n--;
	}
	return (str);
}
