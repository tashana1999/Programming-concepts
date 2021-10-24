#include<iostream> 
using namespace std;
int main(){
	int c=0;
	int num[4]={0,1,2,3};
	for(int i=0;i<4;i++){
		if(num[i]>c){
			c=num[i];
		}
		
	}
	cout<<"highest no"<<c<<endl;
	return 0;
}
