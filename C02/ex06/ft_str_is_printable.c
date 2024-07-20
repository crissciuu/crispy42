/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturtule <mturtule@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:24:51 by mturtule          #+#    #+#             */
/*   Updated: 2024/07/18 14:40:57 by mturtule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	c[100];

	printf("Enter a string:\n");
	scanf("%s", c);
	if (ft_str_is_printable(c) == 1)
	{
		printf("The symbols inside your string are printable!\n");
	}
	else
	{
		printf("Your string contains unprintable symbols!\n");
	}
	return (0);
}*/
