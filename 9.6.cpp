#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;
int*count;
void c_letter(string s){
	count=new int[26]{0};
	int l;
	for(int i=0;i<s.length();i++){
		l=toupper(s[i])-65;
		*(count+1)=*(count+1)+1;
	}
}
int main(){
	string str;
	cout<<"Enter the string:";
	getline(cin,str);
	c_letter(str);
	for(int i=0;i<26;i++)
	 if(count[i]>0)
	   cout<<char(i+65)<<":"<<count[i]<<endl;
	   delete [] count;
	   return(0);
}
