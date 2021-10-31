#include<iostream>
using namespace std;
int main(void){
    int x,y,z;
 cout<<"Enter no1"<<endl;
 cin>>x;
 cout<<"Enter no2"<<endl;
 cin>>y;
 cout<<"Enter no3"<<endl;
 cin>>z;
int min=0;
int max=0;
if(max<x){
	max=x;
	if(max<y){
		max=y;
		if(max<z){
			max=z;
		}
	}
}
cout<<"max"<<max<<endl;

	if(x>y){
		min=y;
		if(min>z){
			min=z;
		}
	}
	else{
		min=x;
	}
	cout<<"min"<<min<<endl;

	
	return 0;
}
