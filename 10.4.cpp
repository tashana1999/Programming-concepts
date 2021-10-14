#include<iostream>
#include<string.h>
using namespace std;
int main(){
	FILE*fptr;
	char word[100],copy[100],filename[100];
	int c;
	cout<<"Input the file that has to open:";
	scanf("%s",filename);
	fptr=fopen(filename,"r");
	fscanf(fptr,"%s%d",copy,&c);
	cout<<"This is the content of the file test.txt\n";
	while(!feof(fptr)){
		cout<<copy<<""<<c<<endl;
		fscanf(fptr,"%s%d",copy,&c);
	}
	fclose(fptr);
	//delete(filename);
}
