#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=0;i<=8;i++){
		for(j=0;j<=8;j++){
			if((i==0)||(i==8)){
				cout<<"*";
			}
			else{
				if((j==i)||(j==7-i)||(j==0)||(j==8)){
					cout<<"*";
				}
				else{
					cout<<" ";
				}
				
				
			}
			
	}cout<<"\n";
	}
	cout<<"\n";
return 0;

}
