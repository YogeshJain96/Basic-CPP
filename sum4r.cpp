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
