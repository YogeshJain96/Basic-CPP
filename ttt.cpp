// Tic Tac Toe
#include<iostream>
using namespace std;

char ar[3][3];
void initMatrix(){
        for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                ar[i][j]='*';
                }
              }
}
void dispMatrix(){
	for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
               		cout<<ar[i][j];
                }
                cout<<"\n";
        }
}
void editMatrix(int location,char x){
        if(location==0)
                ar[0][0]=x;
	else if(location==1)
		 ar[0][1]=x;
	else
		 ar[1][1]=x;

}

int main(){
	//3*3
	cout<<"Welcome to TTTv1.0 \n";

	int p=0;// Player's Turn
	int location=0;// Matrix Location
	int count=0;//Counter 1 to 9
	initMatrix();
	//User's Location Map
	cout<<"\n00--01--02\n10--11--12\n20--21--22\n \nEnter Location's \n";

	//Taking Location Input From User
	while(count<9){
	if(p%2==0){
		p++;
		cout<<"Player p1 turn's:"<<endl;
		cin>>location;
		editMatrix(location,'#');
		
	}
	else{
		p++;
		cout<<"Player p2 turn's"<<endl;
		cin>>location;
		editMatrix(location,'0');
	}
	count++;
	dispMatrix();
}
	
	return 0;
}
