#include<iostream>
#include<stdlib.h>
using namespace std;
void findMax(int array[],int size,int*max)
{*max=array[0];
 for(int i=0;i<size;i++){
 	if(array[i]>*max)
 	 *max=array[i];
 }
}
int main(){
	int size,max;
	cout<<"Enter the number of elements:"<<endl;
	cin>>size;
	int*array=new int[size];
	for(int i=0;i<size;i++){
		cout<<"Number"<<i<<":";
		cin>>array[i];
	}
	for(int i=0;i<size;i++){
		
		cout<<array[i]<<"";
	}
	findMax(array,size,&max);
	cout<<"\nMax is"<<max;
	
}
