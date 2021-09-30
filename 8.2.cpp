#include<iostream>
using namespace std;
int main(){
	int userInput;
	cout<<"please insert your input"<<endl;
	cin>>userInput;
	int *ptr=&userInput;//assign the memory address of variable to variable pointer
	cout<<"Address of the user input from pointer"<<*ptr<<endl;
	
}
