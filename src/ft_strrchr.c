/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: marlou <marlou@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/05 17:05:33 by marlou        #+#    #+#                 */
/*   Updated: 2024/02/23 16:06:26 by mkootstr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i != 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	if (i == 0 && s[i] != c)
		return (NULL);
	else
		return ((char *)s + i);
}
