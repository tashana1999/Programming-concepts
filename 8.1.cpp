#include<iostream>
using namespace std;
int main(){
	int x;//this variable is stored somewhere in the computer memory.In some cases we actually need to see where is this memory is
	cout<<"Enter a number\n";
	cin>>x;
	cout<<"Address is"<<&x<<"\n";//& address operator and &variable is the memory address of the variable
	return 0;
}

