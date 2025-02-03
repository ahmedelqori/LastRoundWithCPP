/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:56:34 by ael-qori          #+#    #+#             */
/*   Updated: 2025/02/03 14:22:35 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("default"), _grade(75){}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade){}

Bureaucrat::Bureaucrat(const Bureaucrat &_copy):_name(_copy._name), _grade(_copy._grade){}

Bureaucrat::~Bureaucrat(){}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &_copy)
{
    if (this != &_copy)
        this->_grade = _copy._grade;
    return *this;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}
int         Bureaucrat::getGrade() const
{
    return this->_grade;
}

void    Bureaucrat::increment(void)
{
    if (this->_grade <= 1)
        throw GradeTooHighException();
    --_grade;
}
void    Bureaucrat::decrement(void)
{
    if (this->_grade >= 150)
        throw GradeTooLowException();
    ++_grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Error Grade is too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Error Grade is too Low";
}

std::ostream& operator<<(std::ostream& os, Bureaucrat b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os; 
}