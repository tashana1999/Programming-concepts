#include<iostream>
using namespace std;
int main (){
	int j,sum;
	
	for(int i=0;i<6;i++){
		cout<<"Enter a number:"<<endl;
		cin>>j;
		if(j%2==1){
			sum+=j;
			
		}
		
	
			
		
	}
	cout<<"Sum of odd numbers:"<<sum<<endl;

	
	return 0;
}
