/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:46:04 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/28 13:12:05 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "call constructer of Animal" << std::endl;
}

Animal::~Animal()
{
    std::cout << "call destructer of Animal" << std::endl;
}

void    Animal::makeSound()
{
    std::cout << "print sound" << std::endl;
}
