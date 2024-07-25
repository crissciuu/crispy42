/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturtule <mturtule@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:58:57 by mturtule          #+#    #+#             */
/*   Updated: 2024/07/25 14:01:45 by mturtule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	if (min >= max || arr == NULL)
	{
		printf("error");
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		*(arr + i) = min + i;
		i++;
	}
	return (arr);
}
