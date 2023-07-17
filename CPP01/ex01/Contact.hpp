/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:08:18 by antbarbi          #+#    #+#             */
/*   Updated: 2022/07/25 15:23:43 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
# include <cstring>
# include <iomanip>
# include <limits>

class Contact
{
	public :
	
		Contact(void);
		~Contact(void);
		
		std::string	show_format(std::string str) const;
		void		show_contact() const;
		void		show_contact_info() const;
		void		set_contact();

	private :
		
		std::string _first_name;
		std::string	_last_name;
		std::string _nickname;
		std::string _phone;
		std::string _dsecret;
};

#endif