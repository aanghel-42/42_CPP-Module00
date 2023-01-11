/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:06:45 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/11 00:16:24 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/contacts.hpp"
#include "../inc/phonebook.hpp"

int main(void)
{
    PHONEBOOK phonebook;
    std::string command;
    while (1)
    {
        phonebook.start();
        std::cin >> command;
        if (command == "ADD" || command == "add")
            phonebook.add();
        else if (command == "SEARCH" || command == "search")
            phonebook.search();
        else if (command == "EXIT" || command == "exit")
            break ;
        else
            std::cout << "\nERROR: this command doesn't exist!\n" << std::endl;
    }
    return (0);
}