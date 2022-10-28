#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl is here!" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl is gone!" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "debug: ";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "info: ";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "warning: ";
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "error: ";
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*complainPTR[4])(void);
	int			i;
	std::string	grievances[4] = {"debug", "info", "warning", "error"};

	i = 0;
	complainPTR[0] = &Harl::debug;
	complainPTR[1] = &Harl::info;
	complainPTR[2] = &Harl::warning;
	complainPTR[3] = &Harl::error;
	while (i < 4)
	{
		if (level == grievances[i])
		{
			(this->*complainPTR[i])();
			break ;
		}
		i++;
	}

}