#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::get_first_name(void) const
{
	return (this->first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->nickname);
}

std::string	Contact::get_phone_num(void) const
{
	return (this->phone_num);
}

std::string	Contact::get_dark_secret(void) const
{
	return (this->dark_secret);
}

void	Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
	return ;
}

void	Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
	return ;
}

void	Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
	return ;
}

void	Contact::set_phone_num(std::string phone_num)
{
	this->phone_num = phone_num;
	return ;
}

void	Contact::set_dark_secret(std::string dark_secret)
{
	this->dark_secret = dark_secret;
	return ;
}