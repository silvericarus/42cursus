/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:28:42 by albgonza          #+#    #+#             */
/*   Updated: 2023/07/10 16:37:48 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	frag("fraggie");

	frag.attack("some random dude");
	frag.takeDamage(5);
	frag.beRepaired(5);
	frag.highFivesGuys();
	return (0);
}