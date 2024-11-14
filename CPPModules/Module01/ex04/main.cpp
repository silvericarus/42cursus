/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 23:03:43 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/26 23:03:43 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

void replaceString(std::string& str, const std::string& search, const std::string& replace)
{
    size_t pos = 0;
    while ((pos = str.find(search, pos)) != std::string::npos) {
        str = str.substr(0, pos) + replace + str.substr(pos + search.length());
        pos += replace.length();
    }
}

int main(int args, char **argv)
{
	if (args == 4)
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::ifstream file(filename.c_str());
		std::string line;
		std::string newfile = filename + ".replace";
		std::ofstream output(newfile.c_str());
		if (file.is_open())
		{
			while (std::getline(file, line))
			{
				replaceString(line, s1, s2);
				output << line << std::endl;
			}
			file.close();
			output.close();
		}
		else
			std::cout << "Error opening file" << std::endl;
	}
	else
		std::cout << "Wrong arguments" << std::endl;
}
