#include<iostream>
using namespace std;
int main(){
	int i,j,k,l;
	for(k=1;k<=5;k++){for(l=1;l<=9;l++){
	
		if((l<=6-k)||(l>=4+k)){
		     cout<<"*";}
		else{	cout<< " ";
		}     
	
	        
	        
				
	}cout<<"\n";

	}
	for(i=1;i<=5;i++){for(j=1;j<=9;j++){
	
		if((j<=i)||(j>=10-i)){
		     cout<<"*";}
		else{	cout<<" ";
		}     
	
	        
	        
				
	}cout<<"\n";

	}
	return 0;
}
