#include<iostream>
using namespace std;
int main (){
	int j,sum;
	
	for(int i=0;i<6;i++){
		cout<<"Enter a number:"<<endl;
		cin>>j;
		if(j%2==0){
			sum+=j;
			
		}
		
	
			
		
	}
	cout<<"Sum of even numbers:"<<sum<<endl;

	
	return 0;
}
