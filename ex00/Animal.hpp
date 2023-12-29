/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:35:08 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/29 12:32:46 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include "iostream"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        ~Animal();
         void makeSound() const;
};
#endif