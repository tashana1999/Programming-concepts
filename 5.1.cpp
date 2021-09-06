#include <iostream>
using namespace std;
int power(int a ,int b);
int main() {
	int a,b;
	cout << "Enter a base\n";
	cin>> a;
	do{
	  cout << "Enter a exponent\n";
	  cin>> b;
	}while(b<0);
	
	
	cout<<power(a,b)<<endl;
	
	
	return 0;
	}
int power(int x,int y){
    int c=1;
	for(int i=1; i<=y;i++)
	  c *=x;
	return c;  
	  
}	
	
	



