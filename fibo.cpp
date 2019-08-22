//Write a recursive function to obtain n numbers of a Fibonacci series
//(0 1 1 2 3 5 8 13 21 34 55 89...)

#include<iostream>
using namespace std;
int fbn(int n,int a,int b,int s){
//	cout<<a<<"\t"<<b;
	if(n>0){	
	s=a+b;
	a=b;
	b=s;
	cout<<"\t"<<s;
	n--;
	fbn(n,a,b,s);
	}	

	else
	return 0;

}
int main(){
	int n;
	cin>>n;
//	int a=0,b=1;
	cout<<"0\t1";
	fbn(n-2,0,1,0);
	return 0;
}
