/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:22:55 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/11 09:33:37 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int c;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        i = 1;
        while (i < argc)
        {
            c = 0;
            while (argv[i][c])
            {
                if (argv[i][c] >= 'a' && argv[i][c] <= 'z')
                    argv[i][c] = argv[i][c] - 32;
                c++;
            }
            std::cout << argv[i];
            i++;
        }
        std::cout << std::endl;
    }
    return 0;
}