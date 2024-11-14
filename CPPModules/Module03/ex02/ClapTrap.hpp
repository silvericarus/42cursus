/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:29:04 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/28 22:29:04 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_damage;
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &claptrap);
		ClapTrap();
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &claptrap);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName(void) const;
};
std::ostream	&operator<<( std::ostream &ostream, ClapTrap const &claptrap );
#endif