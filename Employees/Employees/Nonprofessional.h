#ifndef NONPROFESSIONAL_H_
#define NONPROFESSIONAL_H_
#include "Employee.h"

//Declaration for the Nonprofessional derived class
class Nonprofessional : public virtual Employee {
public:
	Nonprofessional(double hours, double wage) {
		if (TESTING) {
			std::cout << "Testing nonprofessional constructor: hours(" << hours << "), wage(" << wage << "), EMP_TYPE(" << EMP_TYPE << ")" << std::endl;
		}
		this->hours = hours;
		this->wage = wage;
		this->weekly_salary = this->calculate_weekly_salary();		//calculates weekly salary and stores in parent class property
		this->health_care_cont = this->calculate_health_care();		//calculates health care and stores in parent class property
		this->vacation_days = this->calculate_vacation_days();		//calculates vacation days and stores in parent class property
		this->emp_type = EMP_TYPE;									//stores type of employee in parent class property
	}
	double calculate_weekly_salary() const;
	double calculate_health_care() const;
	double calculate_vacation_days() const;
	void print();

private:
	double hours = 0.0;
	double wage = 0.0;
	const double HC_PERCENTAGE = 0.10;
	const double VACATION_PERCENTAGE = 0.005;
	std::string EMP_TYPE = "Nonprofessional Employee";
};
#endif // !NONPROFESSIONAL_H_