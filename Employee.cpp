#include "stdafx.h"
#include "Employee.h"
#include <iostream>
using namespace std;
namespace Records {

	Employee::Employee()
		: mFirstName("")
		, mLastName("")
		, mEmployeeNumber(-1)
		, mSalary(kDefaultStartingSalary)
		, bHired(false)
	{
	}

	void Employee::promote(int inRaiseAmount) {
		setSalary(getSalary() + inRaiseAmount);
	}

	void Employee::demote(int inDemeritAmount) {
		setSalary(getSalary() - inDemeritAmount);
	}

	void Employee::hire() {
		bHired = true;
	}

	void Employee::fire() {
		bHired = false;
	}

	void Employee::display() const {
		cout << "Employee: " << getLastName() << ", " << getFirstName() << endl;
		cout << "-------------------------" << endl;
		cout << (bHired ? "Current Employee" : "Former Employee") << endl;
		cout << "Employee Number: " << getEmployeeNumber() << endl;
		cout << "Salary: $" << getSalary() << endl;
		cout << endl;
	}

	// Accessors and setters

	void Employee::setFirstName(string inFirstName) {
		mFirstName = inFirstName;
	}

	string Employee::getFirstName() const {
		return mFirstName;
	}

	void Employee::setLastName(std::string inLastName)
	{
		mLastName = inLastName;
	}

	std::string Employee::getLastName() const
	{
		return mLastName;
	}

	void Employee::setEmployeeNumber(int inEmployeeNumber)
	{
		mEmployeeNumber = inEmployeeNumber;
	}

	int Employee::getEmployeeNumber() const
	{
		return mEmployeeNumber;
	}

	void Employee::setSalary(int inNewSalary)
	{
		mSalary = inNewSalary;
	}

	int Employee::getSalary() const
	{
		return mSalary;
	}

	bool Employee::getIsHired() const
	{
		return bHired;
	}

	Employee::~Employee()
	{
	}

}