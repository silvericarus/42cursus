/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:20:29 by albgonza          #+#    #+#             */
/*   Updated: 2023/07/10 16:51:44 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		std::string	_name;
		int	_hp;
		int	_ep;
		int	_damage;
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &scavtrap);
		ScavTrap();
		~ScavTrap();
		ScavTrap	&operator=(const ScavTrap &scavtrap);
		void	attack(const std::string& target);
		void	guardGate();
		std::string	getName(void) const;
};
std::ostream	&operator<<( std::ostream &ostream, ScavTrap const &scavtrap );
#endif