/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:47:01 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/21 20:48:07 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
	std::cout << "HumanA created" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destroyed" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << (*weapon).getType() << std::endl;
}
