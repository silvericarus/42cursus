/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:28:42 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/28 22:28:42 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ClapTrap("ClapTrap");

	ClapTrap.attack("target");
	ClapTrap.takeDamage(5);
	ClapTrap.beRepaired(5);
	return (0);
}