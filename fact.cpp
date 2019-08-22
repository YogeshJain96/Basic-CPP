//Write a function for factorial and use the function for printing factorial series like 1 2 6 24 120……
#include<iostream>
using namespace std;
int fact(int n){
	int f=1;
	for(int i=n;i>0;i--){
	f=f*i;
	}
	cout<<f<<"\t";
	return 0;
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		fact(i);
	return 0;
}
