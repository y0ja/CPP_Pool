/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 07:42:50 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/09 21:28:06 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Form;
class Bureaucrat {

public:
	class GradeTooHighException : public std::exception {
		public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
		virtual const char* what() const throw();
	};

	Bureaucrat( std::string name, int grade ) throw(GradeTooLowException, GradeTooHighException);
	Bureaucrat( Bureaucrat const & src );
	~Bureaucrat( void );

	Bureaucrat &		operator=( Bureaucrat const & src );

	std::string const	&getName( void ) const;
	int					getGrade( void ) const;

	void				incGrade( void ) throw(GradeTooHighException);
	void				decGrade( void ) throw(GradeTooLowException);

	void				signForm(Form & form) const;

private:
	std::string const 	_name;
	int					_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif
