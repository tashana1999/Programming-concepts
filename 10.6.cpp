#include<iostream>
#include<string.h>
using namespace std;

int main(){
	FILE *fptr;
	char word[100],copy[100],filename[100];
	int c,count=0,i,totChar=0,totInt=0;
	
	cout<<"Input the file that has to open : ";
	scanf("%s",filename);

	fptr=fopen(filename,"r");
	
	fscanf(fptr,"%s %d",copy,&c);

	while(!feof(fptr)){
		count++;
		
		for(i=0; copy[i] != '\0'; i++){
	        if(copy[i]!=' ')// this condition is used to avoid counting space
	        {
	            totChar++;
	        }
    	}
    	
    	
    	while(c/10!=0){
    		totInt++;
		}
		totInt++;
		fscanf(fptr,"%s %d",copy,&c);
	}
	
	fclose(fptr);
	cout<<"The number of words in the file is : "<<count<<endl;
	cout<<"The number of characters in the file is : "<<totChar+totInt<<endl;
}
