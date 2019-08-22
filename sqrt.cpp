#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int x1=0,x2=0;
	x1=((-b)+sqrt(pow(b,2)-(4*a*c)))/(2*a);
	x2=((-b)-sqrt(pow(b,2)-(4*a*c)))/(2*a);
	cout<<x1<<"\t"<<x2;
	 return 0;
}
