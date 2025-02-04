/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:17:07 by ael-qori          #+#    #+#             */
/*   Updated: 2025/02/04 21:20:49 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat b("Meedivo", 4);
        Form f("Job", 3, 1);

        b.signForm(f);
        f.beSigned(b);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}