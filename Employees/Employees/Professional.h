#ifndef PROFESSIONAL_H_
#define PROFESSIONAL_H_
#include <iostream>
#include "Employee.h"
//Declaration of the Professional derived class
class Professional : public virtual Employee {
public:
	Professional(double monthly_salary){
		if (TESTING) {
			std::cout << "Testing professional constructor: monthly_salary(" << monthly_salary << ") EMP_TYPE(" << EMP_TYPE << ")" << std::endl;
		}
		this->monthly_salary = monthly_salary;
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
	double monthly_salary = 0;
	const double HC_PERCENTAGE = 0.08;
	const double VACATION_PERCENTAGE = .35;
	std::string EMP_TYPE = "Professional Employee";
};
#endif // !PROFESSIONAL_H_
