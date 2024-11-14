/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:46:59 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/21 17:47:00 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
	std::cout << "HumanB of name " << name << " created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB of name " << name << " destroyed" << std::endl;
}

void	HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << (*weapon).getType() << std::endl;
	else
		std::cout << this->name << " has no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
