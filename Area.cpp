#include<iostream>
using namespace std;
int aoc(int r){
	float area;
	area=3.14*r*r;
	cout<<"\n Area of circle is:\t"<<area;
	
	return 0;
}
int aos(int s){
	int z;
	z=s*s;
	cout<<"\n Area of square is:\t"<<z;
	return 0;
}
int aor(int l,int b){
	float ar;
	ar=l*b;
	cout<<"\n area of rectangle is:\t"<<ar;

	
	return 0;

}
int main(){
	int r,s,l,b,choice;
	cout<<"\nEnter ur choice(1,2,3):\t";
	cin>>choice;
	switch(choice)
	{	case 1:cout<<"\n enter the radius of circle\t";
			cin>>r;
			aoc(r);
			break;
		case 2:cout<<"\n enter the side of a square\t:";
		       cin>>s;
		       aos(s);
		       break;
		 case 3:cout<<"\n enter the length and breadth of a rectangle:\t";
			cin>>l>>b;
			aor(l,b);
			break;
		default:cout<<"\n u have entered a wrong choice\n";
			exit(0);
	}
	
	return 0;
}
