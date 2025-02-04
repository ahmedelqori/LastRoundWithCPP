/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:38:46 by ael-qori          #+#    #+#             */
/*   Updated: 2025/02/03 14:54:59 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"


Form::Form():_name("default"), _signed(false), _signedGrade(75), _executeGrade(75) {}
Form::Form(std::string name, int signedGrade, int executeGrade):_name(name),_signed(false), _signedGrade(signedGrade), _executeGrade(executeGrade){}
Form::Form(Form const &_copy):_name(_copy._name), _signed(_copy._signed), _signedGrade(_copy._signedGrade), _executeGrade(_copy._executeGrade){}
Form &Form::operator=(Form const &_copy)
{
    if (this != &_copy)
        *this = _copy;
    return *this;
}
Form::~Form(){}

std::string Form::getName() const           { return this->_name;};
bool        Form::getSigned() const         { return this->_signed;};
int         Form::getSignedGrade() const    { return this->_signedGrade;};
int         Form::getExecuteGrade() const   { return this->_executeGrade;};

void        Form::beSigned(Bureaucrat const &copy)
{
    if (copy.getGrade() >= _signedGrade)
        this->_signed = true;
    else
        throw Form::GradeTooLowException();
}
void        Form::signForm()
{
    
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Error Grade is too Hight for signed";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Error Grade is too Low for signed";
}

std::ostream& operator<<(std::ostream& os, Form f)
{

}