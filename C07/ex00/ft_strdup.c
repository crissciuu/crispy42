/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturtule <mturtule@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:10:18 by mturtule          #+#    #+#             */
/*   Updated: 2024/07/25 12:01:52 by mturtule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	dup = (char *)malloc(ft_strlen(src) * sizeof(char));
	if (dup == NULL)
	{
		return ("\0");
	}
	i = 0;
	while (*(src + i) != '\0')
	{
		*(dup + i) = *(src + i);
		i++;
	}
	*(dup + i) = '\0';
	return (dup);
}
