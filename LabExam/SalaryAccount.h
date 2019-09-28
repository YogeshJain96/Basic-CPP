//Importing Basic Header files
#include<iostream>
#include<string>
using namespace std;

class SalaryAccount{
	private://Declaring Data Member's
		int AccountNo;
		string AccountName;
		string OpeningDate;
		string BankName;
		string IFSCCode;

	public://Declaring Function's
		void Accept();
		void Display();

};
