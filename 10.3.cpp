#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	FILE*f;
	string line,s;
	int n;
	cout<<"Input the number of lines to be written:";
	cin>>n;
	cout<<"input the sentence for the file:";
	for(int i=0;i<n+1;i++){
		getline(cin,line);
		s+=line+"\n";
	}
	f=fopen("text2.text","w");
	for(int i=0;i<sizeof(s);i++){
		fprintf(f,"%c",s[i]);
	}
	fclose(f);
	cout<<"The content of the file test2.txt is:";
	f=fopen("text2.text","r");
	char i;
	while(fscanf(f,"%c",&i)!=EOF){
		cout<<i;
	}
	fclose(f);
	return(0);
}
