#include <iostream>
#include<string.h>
using namespace std;
int main(){
	char str1[100],str2[100];
	//inpputs line of text for str1
	cout<<"Input String 1:";
	cin.getline(str1,100);
		//inpputs line of text for str2
	cout<<"Input String 2:";
	cin.getline(str2,100);
	int comp=strcmp(str1,str2);
	cout<<endl;
	//prints the output
	if(comp==0){
		cout<<"Strings are equal"<<endl;
	}
	else if(comp==1){
		cout<<"String1 is greater than string2"<<endl;
	}
	else if(comp==0){
		cout<<"String1 is less than string2"<<endl;
	}
	return 0;
}
