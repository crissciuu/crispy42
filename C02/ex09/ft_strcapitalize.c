/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturtule <mturtule@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:32:47 by mturtule          #+#    #+#             */
/*   Updated: 2024/07/18 16:58:11 by mturtule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int alpha(char c)
{
	if(c >= 'a' && c <= 'z')
		return (1);
	if(c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char    *ft_strcapitalize(char *str)
{
        int     i;
        int     j;

        i = 0;
        while (str[i] != '\0')
        {
                if (alpha(str[i]) == 1)
                        j = i;
                while (alpha(str[i]) == 1)
                {
                        if (str[i] >= 'A' && str[i] <= 'Z')
                                str[i] +=32;
                        i++;
                }
                if(!(str[j-1] >= '0' && str[j-1] <= '9'))
                        str[j] = str[j] - 32;
                i++;
        }
        return (str);
}


int	main(void)
{
	char	c[100]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(c);
	for (int j = 0; c[j] != '\0'; j++)
	{
		write(1, &c[j], 1);
	}	
	return (0);	
}
