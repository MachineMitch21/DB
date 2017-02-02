#pragma once
#include <vector>
#include <iostream>
#include "Employee.h"
namespace Records {
	const int kFirstEmployeeNumber = 1000;
	class Database
	{
	public:
		Database();
		Employee&	addEmployee(std::string inFirstName, std::string inLastName);
		Employee&	getEmployee(int inEmployeeNumber);
		Employee&	getEmployee(std::string inFirstName, std::string inLastName);

		void		displayAll() const;
		void		displayCurrent() const;
		void		displayFormer() const;
		~Database();

	protected:
		std::vector<Employee> mEmployees;
		int		mNextEmployeeNumber;
	};
}


