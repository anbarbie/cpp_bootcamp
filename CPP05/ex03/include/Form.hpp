/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:25:08 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/26 17:37:47 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <cstring>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public :

		Form(std::string name, int grade_sign, int grade_exec);
		Form(Form const &obj);
		virtual ~Form(void) = 0;

		Form &operator = (Form const &obj);
		
		const std::string	getName() const;
		int					getGradeSign() const;
		int					getGradeExec() const;
		bool				getSign() const;
		
		void				beSigned(Bureaucrat &john);
		virtual	void		execute(Bureaucrat const & executor) const = 0;

		class	GradeTooHighException : public std::exception
		{
			public :
			
				const char *what () const throw () 
				{
					return ("grade is too high for this form");
				}
		};
		class	GradeTooLowException : public std::exception
		{
			public :
			
				const char *what () const throw () 
				{
					return ("grade is too low for this form");
				}
		};
		class	FormNotSigned : public std::exception
		{
			public :
			
				const char *what () const throw () 
				{
					return ("Form is not signed");
				}
		};

	private :

		Form(void);
		const std::string	_name;
		const int			_grade_sign;
		const int			_grade_exec;
		bool				_sign;

};

std::ostream	&operator<<(std::ostream &o, Form &rhs);

#endif