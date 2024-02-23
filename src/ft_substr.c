/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mkootstr <mkootstr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 10:20:16 by mkootstr      #+#    #+#                 */
/*   Updated: 2024/02/23 16:06:35 by mkootstr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;
	size_t	l;

	i = 0;
	if (!s)
		return (NULL);
	l = ft_strlen(s);
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (len > 0 && s[i] != '\0' && start < l)
	{
		dest[i] = s[start];
		i++;
		start++;
		len--;
	}
	dest[i] = '\0';
	return (dest);
}
