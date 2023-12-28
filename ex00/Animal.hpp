/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:35:08 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/28 13:11:52 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        ~Animal();
        void makeSound();
}