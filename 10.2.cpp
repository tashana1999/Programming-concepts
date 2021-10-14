using namespace std;
#include<iostream>
int main(){
	FILE*fptr;
	char fname[20];
	char str;
	cout<<"Input the filename to be opened:";
	cin>>fname;
	fptr=fopen(fname,"r");
	if(fptr==NULL){
		cout<<"File does not exist or cannot be opened\n";
		exit(0);
	}
	cout<<endl<<"The content of the file"<<fname<<"is:"<<endl;
	str=fgetc(fptr);//fptr>file pointer
	while(str!=EOF){
		printf("%c",str);
		str=fgetc(fptr);
	}
	fclose(fptr);
}
