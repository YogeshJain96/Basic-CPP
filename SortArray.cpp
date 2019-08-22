#include<iostream>
using namespace std;
int sortAr(int ar[],int n){
	//sorting
	int t=0;
	for(int x=0;x<n;x++){
		for(int y=0;y<n-1;y++){
		if(ar[y]>ar[y+1]){
		t=ar[y];
		ar[y]=ar[y+1];
		ar[y+1]=t;
		}
		}
	}

	//displaying
	for(int j=0;j<n;j++)
		cout<<ar[j]<<"\t";
	return 0;
	
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sortAr(arr,n);
	
	return 0;
}
