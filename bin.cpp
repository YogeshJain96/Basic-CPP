#include<iostream>
using namespace std;
int binary(int x){
	int s;
	if(x>0){
       s=x%2;
	//cout<<s<<"\t";
 	x=x/2;
	binary(x);
	}
	cout<<s; 
	   return 0;	 
}

int main(){
	int n;
	cin>>n;
	binary(n);
 
	return 0;

}
