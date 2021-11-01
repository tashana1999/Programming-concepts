#include<iostream>
using namespace std;
int main(){
	int x,i;
	int k=1;
	cout<<"Enter a number\n";
	cin>>x;
	for(int i=1;i<=x;i++){
		k=k*i;
	}
	cout<<"factorial"<<k<<endl;
	return 0;
}
