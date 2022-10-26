#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <sstream>
#include <string.h>

class Contact {

private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_num;
		std::string	dark_secret;

public:
		Contact(void);
		~Contact(void);

		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_phone_num(void) const;
		std::string	get_dark_secret(void) const;
		void		set_first_name(std::string first_name);
		void		set_last_name(std::string last_name);
		void		set_nickname(std::string nickname);
		void		set_phone_num(std::string phone_num);
		void		set_dark_secret(std::string dark_secret);

};

#endif