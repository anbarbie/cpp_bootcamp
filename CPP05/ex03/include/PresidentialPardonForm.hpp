/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:30:40 by antbarbi          #+#    #+#             */
/*   Updated: 2022/08/26 15:46:36 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"


class PresidentialPardonForm : public Form
{
	public :

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &obj);
		~PresidentialPardonForm(void);

		PresidentialPardonForm &operator = (PresidentialPardonForm const &obj);

		std::string				getTarget() const;
		virtual	void			execute(Bureaucrat const & executor) const;

	private :

		PresidentialPardonForm(void);
		const std::string		_target;

};

#endif