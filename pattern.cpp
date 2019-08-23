//123454321
//1234 4321
//123   321
//12     21
//1       1

#include<iostream>
using namespace std;
int main(){
	
	for(int i=5;i>=1;i--){
		for(int j=1;j<=i;j++)
			cout<<j;

		for(int s=i;s<5;s++)
			cout<<" ";
	
		for(int s=i+1;s<5;s++)              
                        cout<<" ";
               
		
		for(int k=i;k>=1;k--)
			k!=5?cout<<k:cout<<"";

		cout<<"\n";
	
	}
	return 0;

}
