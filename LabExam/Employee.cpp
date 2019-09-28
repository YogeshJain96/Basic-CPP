#include "Employee.h"//Importing Header File of Class Employee

void Employee::Accept(){
	//Accepting Details of Employee from User's
	cout<<"Enter Employee ID:"<<endl;
	getline(cin,EmpId);
	cout<<"Enter Employee Name:"<<endl;
	getline(cin,EmpName);
	cout<<"Enter Employee Department:"<<endl;
	getline(cin,Dept);

	//Accepting Salary Account Details
	salAct.Accept();//Accepting using Association
}

void Employee::Display(){
	//Displaying Employee Generic Details
	cout<<"//////////////////Employee's Details//////////////////"<<endl;
	cout<<"Employee ID: "<<EmpId<<endl;
	cout<<"Employee Name: "<<EmpName<<endl;
	cout<<"Employee Department: "<<Dept<<endl;
	cout<<"//////////////Employee's Account Details///////////////"<<endl;
	//Displaying Salary Details of Employee
	salAct.Display();//using Association
}
