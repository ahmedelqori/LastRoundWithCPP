/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:17:07 by ael-qori          #+#    #+#             */
/*   Updated: 2025/02/03 14:24:03 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("meedivo", 0);
        a.increment();
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }   
}