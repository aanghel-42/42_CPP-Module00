/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:06:47 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/11 09:36:34 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/contacts.hpp"

void CONTACT::details()
{
	std::cout << "Firtst name: ";
	std::cin >> firstName;
	std::cout << "Last name: ";
	std::cin >> lastName;
	std::cout << "Nickname: ";
	std::cin >> nickName;
	std::cout << "Phone number: ";
	std::cin >> phoneNumber;
	std::cout << "Darkest secret: ";
	std::cin >> darkestSecret;
}

void	CONTACT::display_contacts(int i)
{
	std::cout << "|" << std::setw(10) << ++i;
	if (firstName.length() > 10)
		std::cout << "|" << firstName.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << firstName;
	if (lastName.length() > 10)
		std::cout << "|" << lastName.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << lastName;
	if (nickName.length() > 10)
		std::cout << "|" << nickName.substr(0, 9) << "." << std::endl;
	else
		std::cout << "|" << std::setw(10) << nickName << "|" << std::endl;
}

void	CONTACT::display_contact()
{
	std::cout << "Firtst name: ";
	std::cout << firstName << std::endl;
	std::cout << "Last name: ";
	std::cout << lastName << std::endl;
	std::cout << "Nickname: ";
	std::cout << nickName << std::endl;
	std::cout << "Phone number: ";
	std::cout << phoneNumber << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << darkestSecret << std::endl;
}