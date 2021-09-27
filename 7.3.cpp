#include <iostream>
#include<string.h>
using namespace std;
int main(){
	char s[100];
	//inputs string from the keyboard
	cout<<"Input a line of text:";
	cin.getline(s,100);
	cout<<endl<<endl;
	//converts all letters of the line of text to uppercase
	//strlen() function calculates the length of a given string
	//upper case 65-90
	//lower case 97-122
	int len=strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]>=97 && s[i]<=122){
			s[i]-=32;
		}
	}
	//prints the line of text in uppercase
	cout<<"Line of text in uppercase:"<<s<<endl<<endl;
		//converts all letters of the line of text to uppercase
		len=strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]>=65 && s[i]<=90){
			s[i]+=32;
		}
	}
		//prints the line of text in lowercase
	cout<<"Line of text in lowercase:"<<s<<endl<<endl;
	return 0;
}
