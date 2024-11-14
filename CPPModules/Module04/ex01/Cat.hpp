/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:15:36 by albgonza          #+#    #+#             */
/*   Updated: 2023/09/20 19:18:56 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
class Cat : protected Animal
{
    protected:
        std::string type;
    public:
        Brain *brain;
        Cat();
        Cat(Cat const &);
        ~Cat();
        Cat &operator=(const Cat &cat);
        std::string getType();
        void    setType(std::string);
        void    makeSound();
};
std::ostream	&operator<<( std::ostream &ostream, Cat const &cat );
#endif