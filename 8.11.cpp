#include<iostream>
using namespace std;
int main(){
	char str[300],*ptr;
	int c1,c2;
	//c1:number of consonants
	//c2:number of vowels
	c1=c2=0;
	cout<<"Enter String:"<<endl;
	cin>>str;
	//staring the address of first character in str[] in ptr
	ptr=str;
	while(*ptr!='\0'){
		if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U'){
			++c2;
		}
		else{
			++c1;
		}
		//move to next address(next character)
		++ptr;
	}
	cout<<"Number of Constants:"<<c1<<endl;
	cout<<"Number of Vowels:"<<c2<<endl;
	return 0;
}
