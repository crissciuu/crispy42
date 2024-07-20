/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_is_numeric.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturtule <mturtule@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:09:34 by mturtule          #+#    #+#             */
/*   Updated: 2024/07/18 12:42:06 by mturtule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	c[100]="";

	printf("Enter a string containing only digits:\n");
	//scanf("%s", c);
	if (ft_str_is_numeric(c) == 1)
	{
		printf("Your string contains only digits\n");
	}
	else
	{
		printf("Your string contains symbols other than digits\n");
	}
	return (0);
}

