#include "Nonprofessional.h"

//Implementation of of the Nonprofessional derived class
double Nonprofessional::calculate_weekly_salary() const
{
	if (TESTING) {
		std::cout << "Testing nonprofessional 'weekly_salary': hours(" << this->hours << ") * wage("<< this->wage<<") = " << (this->wage * this->hours) << std::endl;
	}
	return (this->wage * this->hours);
}

double Nonprofessional::calculate_health_care() const
{
	if (TESTING) {
		std::cout << "Testing nonprofessional 'health_care_cont': weekly_salary(" << this->weekly_salary << ")/HC_PERCENTAGE(" << this->HC_PERCENTAGE << ") = " << (this->weekly_salary * this->HC_PERCENTAGE) << std::endl;
	}
	return  (this->weekly_salary * this->HC_PERCENTAGE);
}

double Nonprofessional::calculate_vacation_days() const
{
	if (TESTING) {
		std::cout << "Testing nonprofessional vacation_days per week: VACATION_PERCENTAGE(" << VACATION_PERCENTAGE << ") * hours("<<this->hours<<") = " << (this->hours * this->VACATION_PERCENTAGE) << " days " << std::endl;
	}
	return (this->hours * this->VACATION_PERCENTAGE);
}

void Nonprofessional::print()
{
	std::cout << "Calculating weekly salary, health care contributions, and vacation days" << std::endl;
	std::cout << "for " << this->hours << " hours @ $" << this->wage << " an hour..." << std::endl;
	Employee::print();
}
