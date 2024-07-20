/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturtule <mturtule@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:08:51 by mturtule          #+#    #+#             */
/*   Updated: 2024/07/18 15:19:52 by mturtule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*

int	main(void)
{
	char	c[100] = "meow mEow 12hahahaA";

	ft_strupcase(c);
	for (int i = 0; c[i] != '\0'; i++)
	{
		write(1, &c[i], 1);
	}
	return (0);
}
*/
