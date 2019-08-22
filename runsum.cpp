#include<iostream>
using namespace std;
int s=0;
int rsum(int n){
	s=s+n;
	cout<<"\nRunning Sum:"<<s<<"\n";
	return 0;
}

int main(){
	int n;
	cin>>n;
	rsum(n);
	while(n!=0){
	cin>>n;
	rsum(n);
	}

	return 0;
}
