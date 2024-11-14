/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:51:51 by albgonza          #+#    #+#             */
/*   Updated: 2023/07/11 20:51:51 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
	private:
		std::string	_name;
		int			_hp;
		int			_ep;
		int			_damage;
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &fragtrap);
		FragTrap();
		~FragTrap();
		FragTrap	&operator=(const FragTrap &fragtrap);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	highFivesGuys(void);
		std::string	getName(void) const;
};
std::ostream	&operator<<( std::ostream &ostream, FragTrap const &fragtrap );
#endif