/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 17:47:18 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/26 19:50:10 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include <cstring>
# include <sstream>
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
	public :

		Intern(void);
		Intern(Intern const &obj);
		~Intern(void);

		Intern &operator = (Intern const &obj);

		Form		*makeForm(std::string form, std::string target);

		class	NotValidForm : public std::exception
		{
			public :
			
				const char *what () const throw () 
				{
					return ("Intern can't create this form since it does not exist");
				}
		};
};

#endif