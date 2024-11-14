/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:16:09 by albgonza          #+#    #+#             */
/*   Updated: 2023/07/14 18:40:12 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const &);
        ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &wronganimal);
        std::string getType();
        void    setType(std::string);
        void    makeSound();
};
std::ostream	&operator<<( std::ostream &ostream, WrongAnimal const &animal );
#endif