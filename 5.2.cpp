#include <iostream>
using namespace std;
 int time(int a,int b,int c){
	int i=1;
	i=a*3600+b*60+c;
	return i;
    }
int main() {
	int a,b,c,d,e,p,q,r;
	cout << "Enter hours1\n";
	cin>> a;
	cout << "Enter minutes1\n";
	cin>> b;
	cout << "Enter seconds1\n";
	cin>> c;
	cout << "Enter hours2\n";
	cin>> p;
	cout << "Enter minutes2\n";
	cin>> q;
	cout << "Enter seconds2\n";
	cin>> r;
	d=time(a,b,c);
	e=time(p,q,r);
	int f=e-d;
	cout <<"difference is" << f<<endl;
	return 0;
}
