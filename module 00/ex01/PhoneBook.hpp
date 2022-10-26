#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

private:
		int		index;
		Contact	Contacts[9];

public:
		PhoneBook(void);
		~PhoneBook(void);

		void		add_contact(void);
		void		search_contact(void);
		void		display_table(void);

};

#endif