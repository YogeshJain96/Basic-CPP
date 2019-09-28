//Including Basic Header Files
#include<iostream>
#include<string>
#include"SalaryAccount.h"//Including SalaryAccount Header to create an instance here
using namespace std;
class Employee{
	private:// Declaring Data Member's
		string EmpId;
		string EmpName;
		string Dept;
		SalaryAccount salAct;//Creating an instance of SalaryAccount class(associating SalaryAccount to Employee)

	public:// Declaring function's
		void Accept();
		void Display();

};
