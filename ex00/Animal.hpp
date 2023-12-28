/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:35:08 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/28 21:46:23 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Animal
{
    protected:
        std::string type;
    public:
        Animal(const std::string );
        ~Animal();
        void makeSound();
};