#include <iostream>
using namespace std;
void getValue(int *ptr){
	cout<<"User inserted value is"<<*ptr<<endl;
	
}
int main(){
	int userInput;
	cout<<"please insert your input"<<endl;
	cin>>userInput;
	getValue(&userInput);
}
