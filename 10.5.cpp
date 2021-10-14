#include<iostream>
#include<string.h>
using namespace std;

int main(){
	FILE *fptr;
	char word[100],copy[100],filename[100];
	int c,count=0;
	
	cout<<"Input the file that has to open : ";
	scanf("%s",filename);

	fptr=fopen(filename,"r");
	
	fscanf(fptr,"%s %d",copy,&c);
	cout<<"This is the content of the file test.txt \n";
	while(!feof(fptr)){
		count++;
		fscanf(fptr,"%s%d",copy,&c);
	}
	
	fclose(fptr);
	cout<<"The number of lines in the file is : "<<count<<endl;
}
