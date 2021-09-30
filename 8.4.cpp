#include<iostream>
using namespace std;
int main(){ 
	int userInput;
	cout<<"Please insert your input"<<endl;
	cin>>userInput;
	int *ptr=&userInput;
	cout<<"value of the user input from pointer"<<*ptr<<endl;
}
