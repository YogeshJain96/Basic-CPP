//Accept n characters from user and print is as string.

#include<iostream>
using namespace std;
int main(){
	int n;
	char ar[n];
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>ar[i];
	for(int j=0;j<n;j++)
		cout<<ar[j];

	return 0;
}
