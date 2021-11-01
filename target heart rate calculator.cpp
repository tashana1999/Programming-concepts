#include<iostream>
using namespace std;
int main(){int a,b,c,d,e,f,g,h,i,j;
	cout<<"Enter birth year\n";
	cin>>a;
	cout<<"Enter birth month\n";
	cin>>b;
	cout<<"Enter birth day\n";
	cin>>c;
	cout<<"Enter  year\n";
	cin>>d;
	cout<<"Enter month\n";
	cin>>e;
	cout<<"Enter day\n";
	cin>>f;
	int age=(d*365+e*30+f)-(a*365+b*30+c);
	g=age/365;
	cout<<"Your age in years"<<g<<endl;
	h=220-g;
	cout<<"Your maximum heart rate is"<<h<<endl;
	i=h*0.05;
	j=h*0.85;
	cout<<"Your target heart rate range is:"<<i<<"-"<<j<<endl;
	return 0;
	
	
	
}
