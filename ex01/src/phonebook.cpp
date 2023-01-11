/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:06:41 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/11 00:18:05 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

PHONEBOOK::PHONEBOOK()
{
    count = 0;
    old_contact = 0;
}

void	PHONEBOOK::start(void)
{
	std::cout << "Enter one of three commands: ADD, SEARCH or EXIT" << std::endl;
}

void	PHONEBOOK::add(void)
{
	if (count < 8)
		contacts[count++].details();
	else
	{
		contacts[old_contact++].details();
		if (old_contact == 8)
			old_contact = 0;
	}
}

void	PHONEBOOK::search(void)
{
	int i;
	if (!count)
		std::cout << "The phonebook is empty. Add a contact first" << std::endl;
	else
	{
		i = -1;
		while (++i < count)
			contacts[i].display_contacts(i);
		std::cout << "Insert the index of the contact you would like to see in detail: ";
		if (!(std::cin >> i) || i < 0 || i > count)
		{
			std::cout << "Index not valid or no contact stored." << std::endl;
			std::cin.clear();
		}
		else
			contacts[--i].display_contact();
	}
}