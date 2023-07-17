/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:34:27 by antbarbi          #+#    #+#             */
/*   Updated: 2022/07/25 15:25:36 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <cstring>
# include <iomanip>
# include <limits>
# define MAX_CONT 8

class PhoneBook
{
	public :
	
		PhoneBook();
		~PhoneBook();
		
		void	search_contact() const;
		void	add_contact();

	private :
	
		Contact _contact[MAX_CONT];
		int		_nb_contact;
};

#endif