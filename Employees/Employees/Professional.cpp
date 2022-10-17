#include "Professional.h"
//Implementation of the Professional derived class
double Professional::calculate_weekly_salary() const
{
	if (TESTING) {
		std::cout << "Testing professional 'weekly_salary': monthly_salary(" << this->monthly_salary << ")/weeks(4) = "<< (this->monthly_salary / 4) << std::endl;
	}
	return this->monthly_salary / 4;
}
 
double Professional::calculate_health_care() const
{
	if (TESTING) {
		std::cout << "Testing professional 'health_care_cont': weekly_salary(" << this->weekly_salary << ")/HC_PERCENTAGE("<<this->HC_PERCENTAGE<<") = " << (this->weekly_salary * this->HC_PERCENTAGE) << std::endl;
	}
	return  (this->weekly_salary * this->HC_PERCENTAGE);
}

double Professional::calculate_vacation_days() const
{
	if (TESTING) {
		std::cout << "Testing professional 'vacation_days' per week: VACATION_PERCENTAGE(" << VACATION_PERCENTAGE << ") * weeks(1) =  " << VACATION_PERCENTAGE << " days " << std::endl;
	}
	return VACATION_PERCENTAGE;
}

void Professional::print()
{	
	std::cout << "Calculating weekly salary, health care contributions, and vacation days" << std::endl;
	std::cout << "for a monthly salary of $" << this->monthly_salary << "..." << std::endl;
	Employee::print();
}

