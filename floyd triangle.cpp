#include<iostream>
using namespace std;
int main(){
	cout<<"Enter no of lines\n";
	int x;
	cin>>x;
	int i,j,k;
	int z=1;
	for(i=0;i<x;i++){
		for(j=0;j<i;j++){
			 
			
			cout<<z++<<"\t";
		
			
		}
		cout<<endl;
	}
	return 0;
}
