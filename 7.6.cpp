#include<iostream>
using namespace std;
  int main() {
	
  int trp[4][4]= {0,34,62,128,34,0,90,152,58,90,0,62,128,152,62,0};
  int total=0;
  int i,j;
  char a;
  
  while(a!='n'){
  	cout << "    ***WELCOME TO THE TRIP ADVICER***\n";
  	cout << "  =====================================\n\n";
  	while(true){
	  
  	cout << " Enter 1 - Kegalle\n";
  	cout << " Enter 2 - Kandy\n";
  	cout << " Enter 3 - Colombo\n";
  	cout << " Enter 4 - Galle\n\n";
  	
  	cout << " Enter your current location :-";
  	cin >> i;
  		cout << "\n";
  		if(0<i && i<5){
  			break;
		  }if(0>i || 4<i){cout << " Invalid input\n\n";
		  }
  }
  
  	total=total+trp[i-1][j-1];
  	cout <<" Do you wish to travel further y/n ? ";
  	cin >>a;
  		cout << "\n";
  	if(a=='n'){
  		cout<<" Total distance to be travelled is "<< total<<"Km\n";
	  }
	    else{
	    	int temp;
	    	int jj;
	    	temp = trp[i][j];
	    	trp[i][j] = trp[j][jj];
	    	trp[j][jj] = temp;
	    	while(true){
			
	    	cout<<" Please enter your destination - ";
	    	cin>> jj;
  		if(0<jj && jj<5){
  			break;
		  }if(0>jj || 4<jj){cout << " Invalid input\n\n";
		  }}
	    	total = total = trp[j-1][jj-1];
	    	cout <<"\n total distance to be travelled is " <<total << "Km\n\n"<<endl;
	    }
		}
return 0;
  }

