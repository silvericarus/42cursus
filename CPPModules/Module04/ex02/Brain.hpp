/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:40:19 by albgonza          #+#    #+#             */
/*   Updated: 2023/09/20 19:58:53 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain(Brain const &);
        ~Brain();
        Brain &operator=(const Brain &brain);
        std::string getIdea(int);
        void setIdea(int, std::string);
        std::string* getIdeas();
};
std::ostream	&operator<<( std::ostream &ostream, Brain const &brain );
#endif