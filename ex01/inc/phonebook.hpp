/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 01:16:01 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/11 00:10:52 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../inc/contacts.hpp"
# include <iostream>


class PHONEBOOK
{
    private:
        CONTACT contacts[8];
        int count;
        int old_contact;

    public:
        PHONEBOOK();
        void add(void);
        void search(void);
        void start(void);
};

#endif