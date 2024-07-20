/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturtule <mturtule@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:16:05 by mturtule          #+#    #+#             */
/*   Updated: 2024/07/18 13:23:40 by mturtule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	c[100]="";

	printf("Enter a string:\n");
	scanf("%s", c);
	if (ft_str_is_uppercase(c) == 1)
	{
		printf("Your string contains only uppercase characters\n");
	}
	else
	{
		printf("Your string contains symbols other than uppercase characters\n");
	}
	return (0);
}
*/
