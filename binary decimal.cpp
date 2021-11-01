#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
	cout<<"Enter a binary number\n";
	cin>>a;
	b=a/10000;
	c=b*16;
	d=a%10000;
	e=d/1000;
	f=e*8;
	g=d%1000;
	h=g/100;
	i=h*4;
	j=g%100;
	k=j/10;
	l=k*2;
	m=k%10;
	n=m*1;
	o=c+f+i+l+n;
	cout<<"decimal number is"<<o<<endl;
	return 0;
}
