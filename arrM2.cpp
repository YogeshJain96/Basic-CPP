#include<iostream>
using namespace std;
int mult2(int ar[],int n){
        for(int j=0;j<n;j++)
                 cout<<(ar[j]*2)<<"\t";
        return 0;

}
int main(){
        int n;
        cin>>n;
        int ar[n];
        for (int i=0;i<n;i++){
                cin>>ar[i];}
	mult2(ar,n);

        return 0;
}
