#include<iostream>
using namespace std;
int main(void){
	
	int x;
	int*y;
	cout<<"Enter a value:";
	cin>>x;//input
	y=&x;
	cout<<"value of the address of pointer is:"<<&y;
}
