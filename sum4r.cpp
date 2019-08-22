//Get  4 digit number from user, write a function to calculate sum of digits of the 4-digit number Using Recurrsion

#include<iostream>
using namespace std;
int SumAll(int x,int s){
	int n;
	n=x%10;
	x=x/10;
	n=s+n;
	if(x>0){
		SumAll(x,n);
	}
	else{
		cout<<"\n"<<n<<"\n";
		return 0;}
}

int main(){
	int n;
	cout<<"Enter 4 Digit number to get the sum:";
	cin>>n;
	if(n>999 && n<10000)
         SumAll(n,0);
	else
	 cout<<"Enter 4 Digit Number Only";
	return 0;
}
