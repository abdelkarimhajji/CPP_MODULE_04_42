/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:35:08 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/13 11:34:42 by ahajji           ###   ########.fr       */
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
        Animal(Animal &copy);
        Animal &operator=(Animal const &copy);
        virtual void makeSound() const;
        virtual std::string getType() const;
};
#endif