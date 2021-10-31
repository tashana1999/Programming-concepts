#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	cout<<"Enter time using seconds"<<endl;
	cin>>a;
	b=a/3600;
	c=a%3600;
	d=c/60;
	e=c%60;
	cout<<"time"<<b<<":"<<d<<":"<<e<<endl;
	return 0;
}
