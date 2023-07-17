/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:25:08 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/24 16:04:27 by antbarbi         ###   ########.fr       */
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
		~Form(void);

		Form &operator = (Form const &obj);
		
		const std::string	getName() const;
		int					getGradeSign() const;
		int					getGradeExec() const;
		bool				getSign() const;
		
		void				beSigned(Bureaucrat &john);

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

	private :

		Form(void);
		const std::string	_name;
		const int			_grade_sign;
		const int			_grade_exec;
		bool				_sign;

};

std::ostream	&operator<<(std::ostream &o, Form &rhs);

#endif