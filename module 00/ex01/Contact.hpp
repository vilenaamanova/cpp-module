#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

class Contact {

private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNum;
		std::string	darkSecret;

public:
		Contact(void);
		~Contact(void);

		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getPhoneNum(void) const;
		std::string	getDarkSecret(void) const;
		void		setFirstName(std::string first_name);
		void		setLastName(std::string last_name);
		void		setNickname(std::string nickname);
		void		setPhoneNum(std::string phone_num);
		void		setDarkSecret(std::string dark_secret);

};

#endif