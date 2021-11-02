#include<iostream>
using namespace std;
int charge;
int calculateCharges(int x){
	if(x<24){
		charge=(x-8)*7.75+25;
	}
	else{
		charge=(x/24)*50+x*0.5+5*(x%24);
	}
	return charge;
}
int main(){
	
	int x1,x2,x3;
	
	
		cout<<"Enter hours\n";
		cin>>x1;
		
		int a=calculateCharges(x1);
		//cout<<i+1<<"\t"<<x<<"\t"<<a<<"\t"<<"\n";
		cout<<"Enter hours\n";
		cin>>x2;
		
		int b =calculateCharges(x2);
			cout<<"Enter hours\n";
		cin>>x3;
		
		int c=calculateCharges(x3);
		cout<<"Car\t"<<"Hours\t"<<"Charge\t"<<"\n";
	    cout<<1<<"\t"<<x1<<"\t"<<a<<"\t"<<"\n";
	    cout<<2<<"\t"<<x2<<"\t"<<b<<"\t"<<"\n";
	    cout<<3<<"\t"<<x3<<"\t"<<c<<"\t"<<"\n";
	    cout<<"TOTAL\t"<<x1+x2+x3<<"\t"<<a+b+c<<"\t"<<"\n";
	
	
	
	return 0;
}
