#pragma once
#include <iostream>
#include <string>

using namespace std;

class EmployeeClass{
	public:
	void print();
	void AddEmployee();
	void RemoveEmployee();
	void EditEmployee();
	void PrintEmployee();
	void PrintSpecificEmployee();
	EmployeeClass(){
		this->FirstName = "N/A";
		this->LastName = "N/A";
		this->Salary = "N/A";
		this->Job = "N/A";
	}
	~EmployeeClass(){}
	string getFirstName(){return this->FirstName;}
	string getLastName(){return this->LastName;}
	string getSalary(){return this->Salary;}
	string getjob(){return this->Job;}
	
	void setFirstName(const string FirstName){this->FirstName = FirstName;}
	void setLastName(const string LastName){this->LastName = LastName;}
	void setSalary(const string Salary){this->Salary = Salary;}
	void setJob(const string Job){this->Job = Job;}
	private:
	string FirstName;
	string LastName;
	string Salary;
	string Job;


};
