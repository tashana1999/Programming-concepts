#include<iostream>
using namespace std;
int main(){float x,z,a,b,c;
string y;
	int i=0;
	while(i<5){
		cout<<"Enter total amount collected"<<endl;
		cin>>x;
		cout<<"Enter name of month"<<endl;
		cin>>y;
		cout<<"Total collections"<<"$"<<x<<endl;
		z=(x*4)/100;
		a=(x*5)/100;
		b=x-z-a;
		c=z+a;
	    cout<<"sales"<<"$"<<b<<endl;
		cout<<"county sales tax"<<"$"<<z<<endl;
		cout<<"state sales tax"<<"$"<<a<<endl;
		cout<<"Total sales tax collected"<<"$"<<c<<endl;
		i++;	
	}
}
