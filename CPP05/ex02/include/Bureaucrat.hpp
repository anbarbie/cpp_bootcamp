/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:26:46 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/26 16:36:03 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <cstring>
# include "color.hpp"
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public :

		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &obj);
		~Bureaucrat(void);

		Bureaucrat &operator = (Bureaucrat const &obj);

		std::string		getName() const;
		int				getGrade() const;

		void			Promote();
		void			Demote();
		void			signForm(Form &form);
		void			executeForm(Form const &form);

		class	GradeTooHighException : public std::exception
		{
			public :
			
				const char *what () const throw () 
				{
					return ("Bureaucrat : Grade is set too high");
				}
		};
		class	GradeTooLowException : public std::exception
		{
			public :
			
				const char *what () const throw () 
				{
					return ("Bureaucrat : Grade is set too low");
				}
		};
		

	private :

		Bureaucrat(void);
		std::string		_name;
		int				_grade;

};

std::ostream &operator<< (std::ostream &o, Bureaucrat &rhs);

#endif