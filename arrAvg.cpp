#include<iostream>
using namespace std;
int avg(int ar[],int n){
	int avg=0;
	for(int j=0;j<n;j++)
		avg=avg+ ar[j];
	cout<<avg/n;
	return 0;

}
int main(){
        int n;
	cin>>n;
	int ar[n];
	for (int i=0;i<n;i++){
                cin>>ar[i];}

	avg(ar,n);

        return 0;
}

