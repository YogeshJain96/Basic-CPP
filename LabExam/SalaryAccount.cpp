#include "SalaryAccount.h"//Importing SalaryAccount class header file

void SalaryAccount::Accept(){
		//Accepting Account Details from user
		cout<<"Enter Employee's Account Details"<<endl;
		cout<<"Enter Account Number: "<<endl;
		cin>>AccountNo;
		cin.get();
		cout<<"Enter Account Name: "<<endl;
		getline(cin,AccountName);
		cout<<"Enter Account opening Date(DD/MM/YYYY): "<<endl;
		getline(cin,OpeningDate);
		cout<<"Enter Employee's Bank Name: "<<endl;
		getline(cin,BankName);
		cout<<"Enter Account's IFSC Code: "<<endl;
		getline(cin,IFSCCode);
}

void SalaryAccount::Display(){
		//Displaying Bank Account's data
		cout<<"Account Number: "<<AccountNo<<endl;
		cout<<"Account Name: "<<AccountName<<endl;
		cout<<"Account opening Date(DD/MM/YYYY): "<<OpeningDate<<endl;
		cout<<"Employee's Bank Name: "<<BankName<<endl;
		cout<<"Enter Account's IFSC Code: "<<IFSCCode<<endl;
}
