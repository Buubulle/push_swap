/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:46:13 by ahalleux          #+#    #+#             */
/*   Updated: 2022/06/28 16:15:01 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ps.h"

int main (int argc, char *argv[])
{
    int i;

    i = 2;
    if (check_argc(argc) == 1)
        return 0;
    while (i <= argc)
        {
            check_digit(argv[i]);
            i++;
        }
        
}