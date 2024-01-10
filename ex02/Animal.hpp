/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:35:08 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/10 15:40:49 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include "iostream"
#include "Brain.hpp"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        // Animal(Animal &copy);
        // Animal &operator=(Animal const &copy);
        virtual void makeSound() const = 0;
        virtual std::string getType() const = 0;
};

#endif