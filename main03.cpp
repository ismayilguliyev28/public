#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
	Intern baby;
	Bureaucrat bureaucrat("bureaucrat", 14);
	AForm *random_form;
	random_form = baby.makeForm("ShrubberyCreationForm", "HiMan");
	if(random_form)
	{
		random_form->beSigned(bureaucrat);
		random_form->execute(bureaucrat);
		std::cout << random_form;
	}
	return 0;
}
