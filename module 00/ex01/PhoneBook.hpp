#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

private:
		int			index;
		Contact		Contacts[9];

public:
		PhoneBook(void);
		~PhoneBook(void);

		void		addContact(void);
		void		searchContact(void);
		void		displayTable(void);
		
};

		std::string	getString(std::string str);

#endif