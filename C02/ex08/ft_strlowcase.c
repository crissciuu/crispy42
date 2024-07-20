/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturtule <mturtule@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:22:21 by mturtule          #+#    #+#             */
/*   Updated: 2024/07/18 15:32:06 by mturtule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	c[100] = "SORRY BRO CAPS KEY IS HAS BROKEN";

	ft_strlowcase(c);
	for (int i = 0; c[i] != '\0'; i++)
	{
		write(1, &c[i], 1);
	}
	write(1, "\n", 1);
	return (0);
}
*/
