#include<iostream>
using namespace std;
int main(){
	//using loop
	int n,sum=0;
	cout<<"Enter 4 Digit number:\t";
	cin>>n;
	for(int i=n;i>0;i=i/10){
	sum=sum+(i%10);
	}
	cout<<"\nSum of "<<n<<":"<<sum;
	return 0;
}
