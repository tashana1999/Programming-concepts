#include<iostream>
using namespace std;
int main(){
	    double x,y,z;
	    cout<<"Enter weight in Kilograms"<<endl;
	    cin>>x;
	    cout<<"Enter height in meters"<<endl;
	    cin>>y;
	    z=x/(y*y);
	    cout<<"Your BMI value is"<<z<<endl;
	    if(z<18.5){
	    	cout<<"You are in underweight level"<<endl;
		}
		else if(z<=24.9){
	    	cout<<"You are in normal level"<<endl;
		}
		else if(z<=29.9){
	    	cout<<"You are in overweight level"<<endl;
		}
		else {
	    	cout<<"You are in obese level"<<endl;
		}
		


	return 0;
}
