/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:46:21 by ahalleux          #+#    #+#             */
/*   Updated: 2022/06/28 16:35:26 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ps.h"

int check_argc(int i)
{
    if (i == 1)
    {
        ft_putstr("MISS 2 arguments\n");
        return 1;
    }
    else if (i == 2)
    {
        ft_putstr("MISS 1 arguments\n");
        return 1;
    }
    return 0;
}

int check_digit(char *i)
{
    if ((int)i > INT_MAX || (int)i < INT_MIN)
    {
        printf("Here");
        ft_putstr("Error\n");
        return 1;
    }
    return 0;
}
