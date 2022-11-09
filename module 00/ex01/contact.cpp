#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::getFirstName(void) const
{
	return (this->firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->lastName);
}

std::string	Contact::getNickname(void) const
{
	return (this->nickname);
}

std::string	Contact::getPhoneNum(void) const
{
	return (this->phoneNum);
}

std::string	Contact::getDarkSecret(void) const
{
	return (this->darkSecret);
}

void	Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
	return ;
}

void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
	return ;
}

void	Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
	return ;
}

void	Contact::setPhoneNum(std::string phoneNum)
{
	this->phoneNum = phoneNum;
	return ;
}

void	Contact::setDarkSecret(std::string darkSecret)
{
	this->darkSecret = darkSecret;
	return ;
}