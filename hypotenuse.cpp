#include<iostream>
#include<math.h>
using namespace std;
double z;
double hypotenuse(double x,double y){
	z=sqrt(x*x+y*y);
	return z;
}
int main(){
	double x,y;
	cout<<"Enter side1\n";
	cin>>x;
	cout<<"Enter side2\n";
	cin>>y;
	cout<<"side3:"<<hypotenuse(x,y)<<endl;
	
	return 0;
}
