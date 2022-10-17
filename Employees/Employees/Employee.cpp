#include <iostream>
#include "Employee.h"

void Employee::print() {
	std::cout << "Employee Type: " << emp_type << std::endl;
	std::cout << "Weekly Salary: $" << this->weekly_salary << std::endl;
	std::cout << "Health Care Contribution: $" << this->health_care_cont << std::endl;
	std::cout << "Vacation Days: " << this->vacation_days << std::endl<<std::endl;
}