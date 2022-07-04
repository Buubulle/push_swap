/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:46:26 by ahalleux          #+#    #+#             */
/*   Updated: 2022/06/28 16:28:52 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H

# include <stdio.h> // a supprimer

# include <unistd.h>
# include <limits.h>
/*****************************
** Include Général function **
*****************************/
int check_argc(int i);
int check_digit(char *i);

/*****************************
** Include Common function **
*****************************/
void ft_putstr(char *str);

# endif