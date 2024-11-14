/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:42:30 by albgonza          #+#    #+#             */
/*   Updated: 2023/09/20 19:51:21 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : protected Animal
{
    protected:
        std::string type;
    public:
        Brain   *brain;
        Dog();
        Dog(Dog const &);
        ~Dog();
        Dog &operator=(const Dog &dog);
        std::string getType();
        void    setType(std::string);
        void    makeSound();
};
std::ostream	&operator<<( std::ostream &ostream, Dog const &dog );
#endif
