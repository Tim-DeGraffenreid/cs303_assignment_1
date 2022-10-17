#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>
#include <iostream>
//Declaration of the Employee abstract class
class Employee {
public: 
	virtual double calculate_weekly_salary() const = 0;		//pure virtual: to be implemented by derived classes
	virtual double calculate_health_care() const = 0;		//pure virtual: to be implemented by derived classes
	virtual double calculate_vacation_days() const = 0;		//pure virtual: to be implemented by derived classes
	virtual void print();									//virtual: to be overridden and implemented by derived classes

protected:
	static const bool TESTING = true;						//TESTING = true when testing/change to false for non-testing
	double weekly_salary = 0.0;
	double health_care_cont = 0.0;
	double vacation_days = 0;
	std::string emp_type = "";						
};
#endif // !EMPLOYEE_H

