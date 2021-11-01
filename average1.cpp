#include<iostream>
using namespace std;
int main(){
	int x,y;
	int i=0;
	int sum=0;
	cout<<"enter number count\n";
	cin>>x;
	while(i<x){
		cout<<"enter number\n";
		cin>>y;
		sum=sum+y;
		i++;
		
		
	}
	int average=sum/x;
	cout<<"average is"<<average<<endl;
	return 0;
}
