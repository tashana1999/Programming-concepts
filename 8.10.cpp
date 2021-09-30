#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	//declare variables
	char str[20],*pt;
	int i=0;
	cout<<"Calculate length of string\n";
	cout<<"Enter Any string[below 20 chars]:";
	cin>>str;
	//Assign to pointer Variable
	pt=str;
	while(*pt!='\0'){
		i++;
		pt++;
	}
	cout<<"\nLength of String:"<<i;
	return 0;
}
