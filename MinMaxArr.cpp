//Accept n number from user and write functions for finding min ,max , second max and second min from these numbers

#include<iostream>
using namespace std;
int MinMax(int ar[],int n){
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
             cout<<"\nMin = "<<ar[0];
	     cout<<"\n2nd Min = "<<ar[1];
	     cout<<"\nMax = "<<ar[n-1];
	     cout<<"\n2nd Max = "<<ar[n-2];
  
        return 0;

}
int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];}
        MinMax(arr,n);

        return 0;
}

