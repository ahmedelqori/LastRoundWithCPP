/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:29:57 by ael-qori          #+#    #+#             */
/*   Updated: 2025/02/04 21:11:17 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <exception>

class Bureaucrat;

class Form
{
    private:
        std::string const   _name;
        bool                _signed;
        int         const   _signedGrade;
        int         const   _executeGrade;
        
    public:
        Form();
        Form(std::string name, int signedGrade, int executeGrade);
        Form(Form const &_copy);
        Form &operator=(Form const &_copy);
        ~Form();

        std::string getName() const;
        bool        getSigned() const;
        int         getSignedGrade() const;
        int         getExecuteGrade() const;

        void        beSigned(Bureaucrat const &copy);

        class GradeTooHighException: public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException: public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, Form &f);


#endif