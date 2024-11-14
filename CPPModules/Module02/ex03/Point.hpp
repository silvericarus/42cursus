/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:13:43 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/28 17:13:43 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"
class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;
	public:
		Point();
		Point(const Point &point);
		Point(const float x, const float y);
		~Point();
		Point	&operator=(const Point &point);
		bool	operator==(const Point &point) const;
		bool	operator!=(const Point &point) const;
		float	getX() const;
		float	getY() const;
};
std::ostream	&operator<<( std::ostream &ostream, Point const &point );
#endif